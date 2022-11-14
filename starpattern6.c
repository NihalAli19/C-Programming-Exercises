#include <stdio.h>
int main()
{
    int i, j, n, m, x, rows, columns;

    printf("Enter the number of rows you want to print stars: ");
    scanf("%d", &rows);
    printf("Enter the number of columns you want to print stars: ");
    scanf("%d", &columns);

    n = rows + 1;
    m = rows - 1;

    for (int i = 1; i <= rows; i++)
    {
        x = 1;
        for (int j = 1; j <= columns; j++)
        {
            if (j >= n - i && j <= m + i)
            {
                printf("%d", x);

                if (j <= columns / 2)
                {
                    x++;
                }
                else
                {
                    x--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}