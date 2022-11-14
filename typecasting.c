#include <stdio.h>
// typecasying syntax
// (type) value;
int main()
{
    int a = 3;
    float b = (float)54/5; // converting 54 into float. Now will provide us result in float.
    printf("The value of a is %f\n", b);
    

    // typecasting: used for converting one data type into other data type
    // type conversion: compiler already converts one data type into other data type. Ex: any arithmetic performed in int and int (54/5) will give us the value in int.
    // int - int = int
    // int - float = float
    // float - float = int 
    // int - int = float , so converting one int into float. Ex: typecasting - (float) int/int = float
    return 0;
}