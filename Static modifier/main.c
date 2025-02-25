#include <stdio.h>

extern int var1;
int increment();

int main()
{
    int value = 0;
    value = increment();
    value = increment();
    value = increment();

    printf("the function increment was called: %d\n", value);
    printf("The value of var 1 is: %d\n", var1);

}