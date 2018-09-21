#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, temp;
    a = 5;
    b = 10;

    printf("a = %d, b = %d\n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, and b = %d\n",a,b);

    return 0;
}
