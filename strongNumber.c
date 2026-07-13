#include <stdio.h>

int main(){
   long long int a,digit,copy2;
   
   //number by user,no. of digits==digits,,,each digit of no.,,power,,
printf("enter your number:");
scanf("%lld",&a);

   copy2=a;

if(a<0){
  printf("invalid input"); 
   return 0;
}

if(a==0){
   printf("number is not an strong number");
   return 0;
}

long long int sum=0;

do
{
   int fact=1;
digit=copy2%10;
for (int i = 1; i <= digit; i=i+1)
{
   fact=fact*i;
}
   sum+=fact;
   copy2=copy2/10;
} while (copy2>0);

if(sum==a)
{
   printf("yay!!your number is an strong number");
}
else{
   printf("number is not an strong number");
}

return 0;
}
