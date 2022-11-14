#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter you age: ");
    scanf("%d", &age);
    
    printf("Enter you marks: ");
    scanf("%d", &marks);

    switch (age)
    {
      case 3:
           printf("The age is 3\n");
           break;

      case 13:
           printf("The age is 13\n");
           switch (marks)
           {
              case 45:
                   printf("Your marks are 45");
              break;
           
              default:
                    printf("Your marks are not 45");
           }
           break;

      case 23:
           printf("The age is 23\n");
           break;

      default:
           printf("Age is not 3, 13 or 23\n");
           // no need to write break at the end of default as it would already end the program//
    }

    return 0; 
}
