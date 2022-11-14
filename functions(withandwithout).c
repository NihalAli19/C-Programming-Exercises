// Function - With argument and Without return value

#include <stdio.h>

void printstar (int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",*');
    }
    
    printf("%c", '*');

}

int main()
{
    int a, b, c;  
    a = 9;
    b = 87;
    printstar(7);
    return 0;
}