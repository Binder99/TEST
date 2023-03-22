#include <stdbool.h>
#include <stdio.h>

int main()
{
    //Quadrat:Seeitenlänge a vom User einlesen
    //Überprüfe: Ob der User eine "gültige" Zahl eingegeben hat
    //Gebe dem User solange die Möglichkeit die Zahl einzugeben,
    //      bis sie gültig ist
    //Berechne den Umfang und den Flächeninhalt des Quadrates
    //Gebe diese werte in der Konsole aus
    //u = 4 * a
    //a = a**2

    bool is_valide_number = false;
    float a;

    while (is_valide_number == false)
    {
        printf("Please enter the value for a: ");
        scanf("%f", &a);

        if (a > 0.00)
        {
            is_valide_number = true;
        }

        else
        {
            printf("You enter a invalide number!\n");
        }
    }

    float perimeter = 4 * a;
    float area = a * a;

    printf("Perimeter %f, area %f", perimeter, area);

    return 0;
}
