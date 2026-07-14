#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int a,copy1,copy2;
    printf("enter the number:");
    scanf("%lld",&a);

    int digit;
    int largestdigit;
    long long int digits;
    copy1=a;
    copy2=a;
    digits=0;

    do
    {
        digits++;
        copy1=copy1/10;
    } while (copy1>0);
    
    largestdigit=copy2%10;

    for (int i =1; i < digits; i++)
    {
        copy2=copy2/10;
         digit=copy2%10;

        if (largestdigit>digit)
        {
            largestdigit=largestdigit;
        }
        else{
            largestdigit=digit;
        }
        
        

    }
    
    printf("%d",largestdigit);


    return 0;
}
