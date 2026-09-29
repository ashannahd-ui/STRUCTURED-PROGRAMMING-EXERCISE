#include <stdio.h>
#include <stdlib.h>

int main()
{
   //chapter 2 exercise 2.16
    int x,y;
    float sum, product, diff, quotient, rem;
    printf("Enter your x value: ");
    scanf("%d",&x);
    printf("Enter your y value: ");
    scanf("%d",&y);
    sum= x+y;
    product= x*y;
    diff= x-y;
    quotient= x/y;
    rem= x%y;
    printf("sum=%.0f \nproduct=%.0f \ndiff=%.0f \nquotient=%0.f \nrem=%.0f",sum,product,diff,quotient,rem);

    return 0;
}
