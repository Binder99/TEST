#include <stdio.h>

void sub(int *v, int s)
{
    *v = *v - s;
}


int main ()
{

    int a = 1; //
    int b = 2; //
    int c = 3; //

    int *p_d = &a; // 1
    int *p_e = &b; // 2
    int *p_f = &c; // 3

    *p_d = ((*p_e) * (*p_e) + (*p_f) * (*p_f)); // 13
    sub(p_e, 2); // 0
    p_d = &b; // 0
    p_f = &a; // 13
    sub(p_f, *p_e); //

    *p_e = *p_d + *p_f; // 13

    printf("%d\n", a); // 13
    printf("%d\n", b); // 0
    printf("%d\n", c); // 13




    return(0);
}
