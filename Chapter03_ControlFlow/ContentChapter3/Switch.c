#include <stdio.h>

enum Beverage
    {
        NO_BEVERAGE,
        WATER,
        COLA,
        FANTA,
        SPRITE,
        COFFEE,
    };

int main()
{
        enum Beverage selected_beverage = NO_BEVERAGE;
        printf("Select a beverage:\nWater (1),\nCola (2),\nFanta (3),\nSprite (4),\nCoffee (5)\n");
        scanf("%d", &selected_beverage);

        printf("You selected %d\n", selected_beverage);

        switch (selected_beverage)
        {
            case WATER:
            {
                printf("You selected a water\n");
                break;
            }

            case COLA:
            {
                printf("You selected a cola\n");
                break;
            }

            case FANTA:
            {
                printf("You selected a fanta\n");
                break;
            }

            case SPRITE:
            {
                printf("You selected a sprite\n");
                break;
            }

            case COFFEE:
            {
                printf("You selected a coffee\n");
                break;
            }

            default:
            {
                printf("You selected an invalid Beverage!\n");
                break;
            }
        }



    return 0;
}
