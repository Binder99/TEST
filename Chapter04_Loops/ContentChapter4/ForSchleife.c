#include <stdio.h>

int main()
{

    int num_interations = 10;

    //for (START, CONDITION, OPERATION)
    for (int i = 0; i < num_interations; i++)
    {
        printf("%d\n", i);
    }

        printf("\n");

        for (int i = 0; i < num_interations; i+=2)
    {
        printf("%d\n", i);
    }

        printf("\n");

        for (int i = num_interations - 1; i >= 0; i--)
    {
        printf("%d\n", i);
    }


    return 0;
}
