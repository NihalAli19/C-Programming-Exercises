#include<stdio.h>
int main()
{
    int i, sum = 0;
    float avg;
    int a[10];

    printf("Enter 10 numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        
        sum = sum + a[i];
    }
    
    avg = sum / 10;

    printf("Average is: %d", avg);
    
    return 0;
}