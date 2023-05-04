#include<stdio.h>
int main()
{
    float celsius, farhaniet;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    farhaniet = (celsius * 9/5) + 32;
    printf("The temperature in farhaniet is: %f", farhaniet);
    return 0;
}
