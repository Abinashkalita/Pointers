#include <stdio.h>

int function(int *a)
{
    *a = 10 * (*a);
    return *a;
}

int main()
{
    int i = 4;
    printf("The value of i is %d\n", i);
    printf("The answer is %d\n", function(&i));

    return 0;
}