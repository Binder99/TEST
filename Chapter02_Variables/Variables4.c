#include <stdio.h>

int main()
{
    //float formatierungssymbol %F
    float my_balance = 1750.30F;
    printf("My balance: %f\n", my_balance);

    float money_from_mars_Austria = 5.0F;
    float doner_kebap_price = 5.0F;

    //Addition +
    //Subtraktion -
    //Division /
    //Multiplikation *

    //my_balance = my_balance + money_from_mars_Austria;
    my_balance += money_from_mars_Austria;
    printf("My balance: %f\n", my_balance);

    //my_balance = my_balance - doner_kebap_price;
    my_balance -= doner_kebap_price;
    printf("My balance: %f\n", my_balance);

    my_balance = my_balance * 2.0f;
    my_balance *= 2.0f;
    printf("My balance: %f\n", my_balance);

    my_balance = my_balance / 2.0F;
    my_balance /= 2.0F;
    printf("My balance: %f\n", my_balance);


    return 0;
}
