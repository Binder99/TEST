#include <stdio.h>

float add(float v)
{
v = v + 1.0f;
return v;
}

void add1(float *v)
{
*v = *v + 1.0f;
}


int main ()
{

    float v_main = 0.0f;

    printf("%f\n", v_main);
    v_main = add(v_main);
    printf("%f\n", v_main);

    add1(&v_main);
    printf("%f\n", v_main);


    return(0);
}
