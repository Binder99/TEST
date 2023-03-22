#include <stdio.h>

int divisibleBy2(int Number);
int divisibleBy3(int Number);
void PrintDivisibilty(int Number);
int getNumberfromUser();



int main()
{

int n = getNumberfromUser();
PrintDivisibilty(n);



    return 0;
}


int divisibleBy2(int Number)
{
    return Number % 2 == 0;
}

int divisibleBy3(int Number)
{
        return Number % 3 == 0;
}

void PrintDivisibilty(int Number)
{
    if(divisibleBy3(Number))
    {
        printf("%d divisible by 3!\n", Number);
        return;
    }

    if(divisibleBy2(Number))
    {
        printf("%d divisible by 2!\n", Number);
        return;
    }

    printf("%d none!\n", Number);
}

int getNumberfromUser()
{
    int Number = 0;

    printf("Pleas enter an intager number:");
    scanf("%d", &Number);

    return Number;
}
