// Functions - Without Argument and Without return value.
#include <stdio.h>
void printgreeting()
{
    printf("Hello, how are you?\n");
}

int main()
{
    char ch = 'y';
    char an = 'n';
    char answer;
    printf("Are you a Fastian? Press \"y\" for Yes and \"n\" for No : ");
    scanf("%c", &answer);
    if (answer == ch)
    {
        printgreeting();
    }
    return 0;
}