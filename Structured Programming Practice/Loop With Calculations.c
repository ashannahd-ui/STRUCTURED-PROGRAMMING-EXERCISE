#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Chapter 4 Exercise 4.11
    int sum;
    for(int i=7;i<=100;i+=7){
        sum+=i;
    }
    printf("Sum of multiples of 7 from 1 to 100 is  %d\n",sum);
    return 0;
}
