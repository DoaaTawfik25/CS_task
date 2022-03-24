#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
int main(int argc,string argv[])
{
//to find number of words we can use (argc)
// argc=argc-1;
//printf("%i\n",argc);
string Text=get_string("Text is: ");
int SentencesCount=0;
int LettersCount=0;
int WordsCount=1;
for( int i= 0;i< strlen(Text); i++)
{
   //chek if it is a letter or a space
   if((Text[i]>= 'a' && Text[i]<= 'z')||(Text[i]>= 'A' && Text[i]<= 'Z'))
  {
     LettersCount++;
  }
   //there is a space between each word
    else if( Text[i]== ' ')
    {

       WordsCount++;
    }
   //chek if it is a Sentence
     else if(Text[i]== '.'|| Text[i]=='?'||Text[i]=='!' )
     {
        SentencesCount++;
     }

}
printf("WordsCount %i\nLettersCount %i\nSentencesCount %i\n",WordsCount,LettersCount,SentencesCount);
float L=(float)LettersCount/(float)WordsCount*100;
float S=(float)SentencesCount/(float)WordsCount*100;
float Grade=0.0588*L-0.296*S-15.8;
if (Grade >=16)
{
     printf("Grade 16+\n");
  }
    else if (Grade <1)
    {
       printf("Before Grade 1\n");
    }
 else
 {
    printf("Grade %i\n", (int) round(Grade));
 }

}