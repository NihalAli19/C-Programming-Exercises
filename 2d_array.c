#include <stdio.h>
int main()
{
    int i, j;
    int marks[4][4] = {{44,35,40,50}, {49,30,41,48}};

    for (int i = 0; i < 2; i++)
    {
        for (int j  = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        //printf("\n"); for matrix
        
    }
    
    return 0;
}