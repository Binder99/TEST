#include <stdint.h>
#include <stdio.h>

int main()
{


    int Mein_Alter;
    int So_viele_Tage = 365;
    int So_viele_Stunden = 24;
    int So_viele_Minuten = 60;
    int So_viele_Sekunden = 60;

    printf("Geben Sie ihr Alter ein: ");
    scanf("%d",&Mein_Alter);
    printf("Mein Alter: %d\n",Mein_Alter);


    So_viele_Tage = Mein_Alter * So_viele_Tage;
    So_viele_Stunden = So_viele_Tage * So_viele_Stunden;
    So_viele_Minuten = So_viele_Stunden * So_viele_Minuten;
    So_viele_Sekunden = So_viele_Minuten * So_viele_Sekunden;


    printf("So Viele Tage: %d\n",So_viele_Tage);
    printf("So Viele Stunden: %d\n",So_viele_Stunden);
    printf("So Viele Minuten: %d\n",So_viele_Minuten);
    printf("So Viele Sekunden: %d\n",So_viele_Sekunden);





    return 0;
}
