#include <stdio.h>

void printstr(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    //char str[] = {'N', 'i', 'h', 'a', 'l','\0'}; // '\0' is important else the garbage value will be printed
    //char str[] = "Nihal"; // automatically puts '\0'
    //char str[50] = "Nihal";
    //char str[5] = "Nihal"; // prints garbage value as no space for '\0'
    //char str[6] = "Nihal"; // extra 1 space for '\0'
    printstr(str);
    return 0;
}   