#include <stdio.h>
int main()
{
    int i, j, rows, choice;

    printf("Enter the number of rows you want to print stars: ");
    scanf("%d", &rows);
    printf("Choose \"0\" for printing triangular star pattern and choose \"1\" for reversed triangular star pattern: ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows; j++)
            {
                if (j >= rows + 1 - i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    if (choice == 1)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows; j++)
            {
                if (j >= i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
}