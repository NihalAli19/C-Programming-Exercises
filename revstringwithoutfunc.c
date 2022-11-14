#include <stdio.h>
int main()
{
    char a[50], ch;
    int l,i;

    printf("Enter a string: ");
    gets(a);

    for (int l = 0; a[l]; l++);
    for(int i = 0; i < l / 2; i++)
    {
        ch = a[i];
        a[i] = a[l - 1 - i];
        a[l - 1 - i]= ch;
    }

    printf("Reverse is %s", a);
}