#include <stdio.h>

int main()
{


    unsigned int Number;


    printf("Please enter the Number:\n");
    scanf("%u", &Number);
    unsigned int number_mod_three = (Number % 3);





        if (number_mod_three == 0)
        {
            printf("The number you entered is div. by 3!\n");
        }

        else
        {
            printf("The number you entered is not div. by 3!\n");
            printf("The remainder is %u", number_mod_three);
        }



    return 0;
}
