#include <stdio.h>
#include <stdlib.h>

int main()
{
  //chapter 3 exercise 3.23
  int counter=1,number,largest;
    while (counter<=10){
        printf("Enter number %d; ",counter);
        scanf("%d",&number);
        if(number>largest){
            largest=number;
        }
        counter++;
    }
    printf("Largest number is %d\n",largest);
    return 0;
}
