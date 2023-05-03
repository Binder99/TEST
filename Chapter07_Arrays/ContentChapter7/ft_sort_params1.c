#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    int j;
    char *temp;

    i = 1;
    j = 1;
    while(i < argc)
    {
        while(j < argc - 1)
        {
            if(argv[j][0] > argv[j + 1][0])
            {
                *temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    i = 1;
        while(i < argc)
    {
        char *arg = argv[i];
        j = 0;
        while(arg[j] != '\0')
        {
            write(1, &arg[j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
