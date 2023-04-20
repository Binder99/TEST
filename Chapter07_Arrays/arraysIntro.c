#include <stdio.h>



int main ()
{

    int number[4];

    for (unsigned int i = 0; i < 4; i++)
    {
        number[i] = 1337;
    }

        for (unsigned int i = 0; i < 4; i++)
    {
        printf("%d\n", number[i]);
    }

    int numbers2[5] = {13, 24, 35, 46, 57};

    for (unsigned int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers2[i]);
    }


    return(0);
}
