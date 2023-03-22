#include <stdio.h>

int main()
{

    //Circle Example
    //1) Read the values for r from the user,
    //   check if the input is correct (non-negative length)
    //2) Compute the parimeter and area of the circle
    //3) Print the computed values to the console

    float r = 0.0F;

    printf("Please enter here the Radius of the circle: ");
    scanf("%f", &r);
    printf("The radius of circle = %f\n", r);

    if (r < 0.0F)
    {
        printf("Radius must be >= 0!\n");
        return 1;
    }

    float area = r * r * 3.14f;
    float perimeter = 2 * 3.14f * r;

    printf("Area: = %f\n", area);
    printf("perimeter: = %f\n", perimeter);





    return 0;
}
