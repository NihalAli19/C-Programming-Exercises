#include <stdio.h>
int main()
{
    int i,j;
    int A[5][3], B[5][3], C[5][3];    

    printf("Enter the elements of first matrix\n");
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", A[i][j]);
        }

        printf("\n");
    }

    printf("Enter the elements of second matrix\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 2; j+s+)
        {
            printf("%d ", A[i][j]);
        }

        printf("\n");
    }
    
    printf("The sum of matrix is\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }

        printf("\n");
    }

    return 0;
}