#include <stdio.h>
#include <stdlib.h>

int main()
{
    // chapter3 exercise 3.2
    float hours,rate,salary;
    while (1) {
        printf("Enter number of hours worked (-1 to end): ");
        scanf("%f", &hours);
      if (hours == -1) {
            break;
        }
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);
      if (hours <= 40) {
            salary = hours * rate;
        }
        else {
            salary = (40 * rate) + ((hours - 40) * rate * 1.5);
        }
         printf("Salary is $%.2f\n\n", salary);
    }
    return 0;
}
