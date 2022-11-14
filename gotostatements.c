#include <stdio.h>
int main()
{
    label:
    printf("We are insider label\n");
    goto end;
    printf("Hello World\n");

    goto label;
    end:
        printf("We are at end\n");

    // goto is the most confusing one to be used, as it confuses the programmer as well as make it difficult to understand the code for the fellow programmers
    // goto is used when we want to break multipleloops using single statement
    return 0;
}