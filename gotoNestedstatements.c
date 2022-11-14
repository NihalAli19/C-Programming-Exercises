#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {       
            printf("Enter the number. Enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                //break; will only break us from the second i.e. the nested for loop but if we want to exit from both of the loop we have to use goto statement to break from both loop.
                goto end; // ends directly from both of the loops (come out of all nensted statements)
            }
        }
        end:
        return 0;
    }
    
}