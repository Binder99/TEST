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

int GetNumberfromUser()
{
    int Number = 0;

    printf("Enter the Number:");
    scanf("%d", &Number);

    return Number;
}


int main ()
{


    int N = GetNumberfromUser();
    PrintEvenorOdd(N);




    return(0);
}
