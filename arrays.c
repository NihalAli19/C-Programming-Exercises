#include <stdio.h>
int main()
{
    //int marks[4];
    // marks[0] = 34;
    // marks[0] = 50;
    // marks[0] = 49;
    // marks[0] = 44;
    // printf("Marks of student 1 is : %d\n", marks[0]);
    // marks[0] = 454;    
    // printf("Marks of student 2 is: %d\n", marks[0]);

    // int marks[4] = {40,44,35,50};
    int marks[] = {40,44,35,50};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array: ", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}