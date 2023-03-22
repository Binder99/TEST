#include <stdio.h>

int main()
{


    int a = 19;
    int b = 4;

    int d = a / b;
    int r = a - (d * b);

    printf("a mod b = %d\n", a % b);
    printf("a mod b = %d\n", r);


    return 0;
}
