#include <stdio.h>

int main()
{
    float seitea;
    float seiteb;
    float umfang;
    float fläche;

    printf("Please enter A: ");
    scanf("%f",&seitea);
    printf("Seite A: %f\n", seitea);


    printf("Please enter B: ");
    scanf("%f",&seiteb);
    printf("Seite B: %f\n", seiteb);


    umfang = seitea * seiteb;
    printf("Umfang Rechteck: %f\n",umfang);

    fläche = 2.0f * seitea + 2.0f * seiteb;
    printf("Fläche: %f\n",fläche);










    return 0;
}
