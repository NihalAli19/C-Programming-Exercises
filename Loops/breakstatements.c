#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
    printf("%d\n", i); 
    printf("Enter you age : ");
    scanf("%d", &age);
    if (age > 10)
    {
        break;
    }
    // break : which ever loops is running, just end it if the condition is not meet
    // for nested loop : the loop inside which break is written will end but the other will keep running (terminate the loop under which break is written)
    // inshort, break statements ENDS the relationship with the loop
    }
    return 0;
}