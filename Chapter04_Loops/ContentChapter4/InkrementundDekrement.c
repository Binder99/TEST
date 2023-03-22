#include <stdio.h>

int main()
{
    //Increment: a = a + 1 <=> a += 1 <=> a++ | Ist das erhöhen einer Int Variable
    //Increment: a = a - 1 <=> a -= 1 <=> a-- | Ist das erniedrigen einer Int Variable

    int i = 0;
    i = i + 1;  // 1 | eins dazu rechnen langer weg
    i += 1;     // 2 | eins dazu rechnen mittel langer weg
    i++;        // 3 | eins dazu rechnen kürzerster weg. Finktioniert nur wenn man nur um eins erhöhen will
    printf("%d", i);

    i = i - 1;  // 2 | eins weg rechnen langer weg
    i -= 1;     // 1 | eins weg rechnen mittel langer weg
    i--;        // 0 | eins weg rechnen kürzerster weg. Finktioniert nur wenn man nur um eins erniedrigen will
    printf("%d", i);


    return 0;
}
