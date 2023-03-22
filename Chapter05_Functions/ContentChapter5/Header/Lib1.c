#include <stdio.h>

#include "Lib1.h"

int GetNumberfromUser()
{
    int number_from_user;

    printf("enter the Number you want to Display:");
    scanf("%d", &number_from_user);

    return number_from_user;
}
