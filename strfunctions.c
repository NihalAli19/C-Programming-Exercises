#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Nihal"; // N comes after A so strcmp returns positive value else would have returned a negative value.
    char s2[] = "Ali";
    char s3[54];
    //puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The lengt.h of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));

    // // s3 = strcat(s1, s2); cannot write like this, we need strcpy() function.
    // strcpy(s3,strcat(s1, s2));
    // puts(s3);

    printf("The strcmp for s1, s2 returned %d", strcmp(s1, s2)); //do not expect ASCII difference or specific value; as per C standard strcmp returns 0(both string same), greater than or less than 0 return. 

    return 0;
}