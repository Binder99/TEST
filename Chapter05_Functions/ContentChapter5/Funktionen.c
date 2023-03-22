#include <stdio.h>

void PrintevenorOdd(int Number)
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


int main()
{

    int a = 2;
    int b = 3;
    int c = 4;

    PrintevenorOdd(a);
    PrintevenorOdd(b);
    PrintevenorOdd(c);



    return 0;
}
