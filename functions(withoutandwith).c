// Functions - Without Arguments and With return value
#include <stdio.h>

int takenumber() // did not took any parameters and returned the value
{
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = takenumber();
    printf("The number entered is : %d", c);
    return 0;
}