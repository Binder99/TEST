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

int getNumberfromUser()
{
    int Number = 0;

    printf("Pleas enter an intager number:");
    scanf("%d", &Number);

    return Number;
}


int main()
{

int n = getNumberfromUser();
PrintevenorOdd(n);


    return 0;
}
