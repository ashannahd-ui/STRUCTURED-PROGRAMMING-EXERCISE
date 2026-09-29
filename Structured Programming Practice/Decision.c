#include <stdio.h>
#include <stdlib.h>

int main()
{
    //chapter2 exercise2.22
    int value, rem;
    printf("Enter your value: ");
    scanf("%d",&value);
    rem= value%2;
    printf("remainder=%d",rem);
    if(rem==0){
    printf("\neven number");

    }else{
    printf("\nodd number");
    }

    return 0;
}
