#include <cs50.h>
#include <stdio.h>

int main(void)
{  int i,j,x,Height;
    do
{
    Height=get_int("Height is : ");
}while(Height<1||Height>8);
if(Height>=1&&Height<=8)
{

    for(i=1; i<=Height; i++)
    {
//space

        for(j=i; j<Height; j++)
        {
            printf(" ");
        }
        //left pyramid
        for(j=1; j<=i; j++)
        {
            printf("#");
        }printf("  ");
        for (j = 1; j <=i; j++) //right pyramid
      {
       printf("#");
     }
printf("\n");
    }
}

}