#include <stdio.h>
int main()
{
    int i, j, n, m, rows, columns;
    char c;

    printf("Enter the number of rows you want to print stars: ");
    scanf("%d", &rows);
    printf("Enter the number of columns you want to print stars: ");
    scanf("%d", &columns);

    n = rows + 1;
    m = rows - 1;

    for (int i = 1; i <= rows; i++)
    {
        c = 'A';
        for (int j = 1; j <= columns; j++)
        {
            if (j <= n - i || j >= m + i)
            {
                printf("%c", c);
                if (j <= columns / 2)
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            else
            {
                printf(" ");
                if (j == 4)
                {
                    c--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}