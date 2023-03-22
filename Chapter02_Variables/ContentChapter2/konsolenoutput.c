#include <stdio.h>

int main()
{

    float float_value2 = 1500.30f;
    float float_value = 1750.30f;
    double double_value = 1750.30;
    int int_value = -1750;
    unsigned int uint_value = 17U;

    float_value = double_value - float_value;
    float_value = double_value + float_value;
    float_value = float_value - float_value2;


    printf("float value: %f\n", float_value);
    printf("double value: %lf\n", double_value);
    printf("int value: %d\n", int_value);
    printf("uint value: %u\n", uint_value);




    return 0;
}
