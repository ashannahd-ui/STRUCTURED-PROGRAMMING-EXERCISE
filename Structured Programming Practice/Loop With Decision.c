#include <stdio.h>
#include <stdlib.h>

int main()
{
    //chapter 3 exercise 3.22
    int number, count;
    printf("Enter an integer: ");
    scanf("%d",&number);
     for (int i=2;i<=number/2;i++){
     if(number%i==0){
        count=count+1;}
    }if(count==0){
        printf("%d is a prime number\n",number);
    }else{
    printf("%d is not a prime number\n",number);
    }
    return 0;
}
