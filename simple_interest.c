#include<stdio.h>
int main()
{
    int principal, rate, years;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    int simple_interest = (principal * rate * years) / 100;
    printf("The simple interest is: %d", simple_interest);
    return 0;
}