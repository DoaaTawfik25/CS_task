#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,string argv[])
{
//Ensure single command-line argument
   if (argc!= 2)
   {
     printf("Usage: ./Caesar Key\n");
     return 1;
   }
    else if (argc== 2)
    {
      string array= argv[1];
//Ensure that argument contains only digit characters
     for (int i= 0; i < strlen(argv[1]); i++)
     {
       if (array[i] >= 'a'&& array[i] <= 'z')
       {
         printf("Usage: ./Caesar Key\n");
         return 1;
       }
     }
//converting argument to an integer by using"atoi"
   int Key= atoi(argv[1]);
   printf("key %i\n",Key);
//prompt the user to type in the plaintext
   string plaintext= get_string("plaintext is : ");

     for (int i= 0;i < strlen(plaintext); i++)
     {
//chek if it is alphabetic char or not
       if (isalpha(plaintext[i]))
       {
//chek if it is lower char or not
         if (islower(plaintext[i]))
         {

            plaintext[i]=(plaintext[i]- 'a'+ Key)%26+ 'a';
         }
           if (isupper(plaintext[i]))
           {
            plaintext[i]= (plaintext[i]- 'A'+ Key)%26+ 'A';
           }

       }
            else
            {
             plaintext[i]= plaintext[i]+ 0;

            }

      }
        printf("ciphertext: %s", plaintext);
        printf("\n ");
    }
}