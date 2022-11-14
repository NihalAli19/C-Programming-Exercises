#include <stdio.h>
/*
3 types of gifts 
gifts to be given to one who have passed:
maths and science - 45
science - 15
maths - 15 
*/

int main()
{
    int a;
    printf("Enter number 1 if you passed in Science\n");
    printf("Enter number 2 if you passed in Maths\n");
    printf("Enter number 3 if you passed in Science and Maths\n");
    scanf("%d", &a);
    if (a==3)
    {
        printf("Congratulations! You have won a prize of 45 Rupees");
    }
    else if (a==2||a==1)
    {
        printf("Congratulations! You have won a prize of 15 Rupees");
    }
    else 
    {
        printf("Sorry! You didn't won any prize");
    }
    return 0;
}
