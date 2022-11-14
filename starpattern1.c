#include <stdio.h>
int main()
{
    int choice, rows;

    printf("Enter the number of rows of stars you want to print: ");
    scanf("%d", &rows);
    printf("Choose \"0\" for printing triangular star pattern and choose \"1\" for reversed triangular star pattern: ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (choice == 1)
    {
        for (int i = rows; i >= 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}