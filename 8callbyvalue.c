#include <stdio.h>
int function(int a)
{
    a = 10 * (a);
    return a;
}

int main()
{
   int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("The answer is %d\n", function(num));
    return 0;
}