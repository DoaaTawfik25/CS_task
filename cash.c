#include <cs50.h>
#include <stdio.h>

int main(void)
{
   float Dollars;
    int coins=0;
    do{
  Dollars=get_float("dollars= : ");

   }while(Dollars<=0);
    int cents=Dollars*100;
   while(cents>=25)
   {
   cents-=25;
   coins++;
   }
    while(cents>=10)
   {
   cents-=10;
   coins++;
}
 while(cents>=5)
   {
   cents-=5;
   coins++;
   }
    while(cents>=1)
   {
   cents-=1;
   coins++;
   }
   printf("Number of coins you need =%i \n",coins);
}