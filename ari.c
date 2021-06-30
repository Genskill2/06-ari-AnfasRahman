#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

string ari(string s)
{
   int count_char=0,count_word=0,count_sent=0,i=0;
   while(s[i]!='\0'){
      if(isalnum(s[i]))
         count_char++;
      if(s[i]==' ')
         count_word++;
      if(s[i]=='.'||s[i]=='!'||s[i]=='?')
         count_sent++;
      i++;
   }
   float score= 4.71*count_char/count_word + 0.5*count_word/count_sent -21.43;
   int k= ceil(score);
   switch(k)
   { 
      case 1: return "Kindergarten";
              break;
      case 2: return "First/Second Grade";
              break;
      case 3: return "Third Grade";
              break;
      case 4: return "Fourth Grade";
              break;
      case 5: return "Fifth Grade";
              break;
      case 6: return "Sixth Grade";
              break;
      case 7: return "Seventh Grade";
              break;
      case 8: return "Eighth Grade";
              break;
      case 9: return "Ninth Grade";
              break;
      case 10: return "Tenth Grade";
               break;
      case 11: return "Eleventh Grade";
               break;
      case 12: return "Twelfth Grade";
               break;
      case 13: return "College Student";
               break;
      case 14: return "Professor";
               break;
   }
}
      
