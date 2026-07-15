#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int num,digit,frequency;
    printf("enter your number:");
    scanf("%lld",&num);
    printf("enter  your digit:");
    scanf("%lld",&digit);
   long long int copy1=num;
   long long int digit1=0;

   frequency=0;
   if(digit < 0 || digit > 9){
    printf("invalid input");
    return 0;
   }

    do
    {
      digit1=copy1%10;
      if(digit1==digit){
        frequency++;
      }

      copy1=copy1/10;
    
    } while (copy1>0);
    
    printf("frequency is equal to %lld",frequency);
  
    if(digit < 0 || digit > 9){
        printf("invalid input");
    }




    return 0;
}
