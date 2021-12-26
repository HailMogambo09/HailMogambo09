#include<stdio.h>
#include<math.h>
int main()
{
    int num1, num2, num3;
    printf("Enter a number whose table you want:");
    scanf("%d", &num1);
    num2 = 1;
    printf("Multiplication Table of %d\n", num1);
    while (num2 <= 10)
    {
        num3 = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, num3);
        num2 = num2 + 1;
    }
    
}