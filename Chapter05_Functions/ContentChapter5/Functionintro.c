#include <stdio.h>

void PrintEvenorOdd(int Number)
{
    if(Number % 2 == 0)
    {
        printf("%d is even!\n", Number);
    }
    else
    {
        printf("%d is odd!\n", Number);
    }
}


int main ()
{

    int a = 1;
    int b = 2;
    int c = 4;

    PrintEvenorOdd(a);
    PrintEvenorOdd(b);
    PrintEvenorOdd(c);




    return(0);
}
