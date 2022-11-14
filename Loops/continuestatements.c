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
        continue;
    }

    printf("We have not come across any continue statements\n");
    // continue : The moment the condition meets, forget all the lines written after it and come at the end of the loop and run it again
    // talks about the next iteration after condition meets and continue statement become active 
    }
    return 0;
}