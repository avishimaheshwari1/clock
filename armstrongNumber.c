#include <stdio.h>

int main(){
   long long int a,digits,digit,copy1,copy2;
   
   //number by user,no. of digits==digits,,,each digit of no.,,power,,
printf("enter your number:");
scanf("%lld",&a);

copy1=a;
   copy2=a;

if(a<0){
  printf("invalid input"); 
   return 0;
}

digits=0;

do
{
digits++;
copy1=copy1/10;
} while (copy1>0);

long long int sum=0;

do
{
   int power=1;
digit=copy2%10;
for (int i = 0; i < digits; i++)
{
   
   
   power=power*digit;

}
   sum+=power;

copy2=copy2/10;
} while (copy2>0);

if(sum==a)
{
   printf("yay!!your number is an armstrong number");

}

else{
   printf("number is not an armstrong number");
}


















return 0;


}
