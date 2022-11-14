#include <stdio.h>
#define PI 3.14
/* this is a multiline comment 


this is ignored by my compiler 
*/
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33; //cannot do this since PI is a constant
    printf("tab character \t\t my backslash \a %f", PI);
    // b = 7.22; // cannot do this since b is a constant
    //printf("The value of a is %d and The value of b is %0.8f\n", a,b);
    
    return 0;
}
