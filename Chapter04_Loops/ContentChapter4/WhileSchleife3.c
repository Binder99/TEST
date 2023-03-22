#include <stdio.h>

int main()
{

    int num_interations = 5;
    int i = 0;
    int goal = 13;
    int selection;

    printf("Welcome to our guessing game!\n");
    printf("You have to guess the right number from the interval of [1, 20]\n ");

    do
    {
        printf("Please enter a number:");
        scanf("%d", &selection);

        if(selection  < 1 || selection > 20)
        {
            printf("You did not enter a valid number!\n");
            printf("You have %d guesses left!", num_interations - (i + 1));
        }
        else if(selection == goal)
        {
            printf("You have won the game!\n");
        }
        else
        {
            printf("Not correct. Please try again!\n");
            printf("You have %d guesses left!", num_interations - (i + 1));
        }

        i++;
    } while(i < num_interations);


    return 0;
}
