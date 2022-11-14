// Function - With argument and With return value

#include <stdio.h>

int sum(int a, int b);  // declaring function 
                        // if we want to write function later so we can declare the function before and then write it anywhere (before or after main(){......} ).  

/*int sum(int a, int b)   // can be directly define and used, but declaring makes it more readable and clear to understand.
{
    return a + b;      
}*/

int main()
{
    int a, b, c;  
    a = 9;
    b = 87;
    c = sum(a,b);  // calling function
    printf("The sum is %d\n", c);
    return 0;
}

int sum(int a, int b)   // defining function
{
    return a + b;      
}