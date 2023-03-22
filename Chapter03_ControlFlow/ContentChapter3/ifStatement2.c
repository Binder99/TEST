#include <stdio.h>

int main()
{

    int age_Thomas = 22;
    int mod = 3;

        if ((age_Thomas % mod) == 0)
        {
            printf("Thomas age is div. by %d\n", mod);
        }

        else
        {
            printf("Thomas age is not div. by %d\n", mod);
        }

    return 0;
}
