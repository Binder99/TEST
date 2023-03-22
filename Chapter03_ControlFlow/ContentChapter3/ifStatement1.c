#include <stdbool.h>
#include <stdio.h>

int main()
{


        int Binder;
        int Ronja;
        int Dominik;

            printf("How old are you Binder?:");
            scanf("%d", &Binder);
            printf("Age = %d\n", Binder);


            printf("How old are you Ronja?:");
            scanf("%d", &Ronja);
            printf("Age = %d\n", Ronja);


            printf("How old are you Dominik?:");
            scanf("%d", &Dominik);
            printf("Age = %d\n", Dominik);


        bool Binder_the_youngest = (Binder < Ronja) && (Binder < Dominik);
        bool Ronja_the_youngest = (Ronja < Dominik) && (Ronja < Binder);
        bool Dominik_the_youngest = (Dominik < Ronja) && (Dominik < Binder);

                if (Binder_the_youngest)
                {
                    printf("Binder is the youngest person in the room.\n");
                }


                else if (Ronja_the_youngest)
                {
                    printf("Ronja is the youngest person in the room.\n");
                }


                else if (Dominik_the_youngest)
                {
                    printf("Dominik is the youngest person in the room.\n");
                }


                else
                {
                    printf("All are the same age.\n");
                }


    return 0;
}
