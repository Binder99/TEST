#include <unistd.h> // for the write function

int main(int argc, char **argv) {
    // bubble sort the arguments
    int i, j;
    for (i = 1; i < argc; i++) {
        for (j = 1; j < argc - i; j++) {
            if (argv[j][0] > argv[j+1][0]) {
                // swap argv[j] and argv[j+1]
                char *temp = argv[j];
                argv[j] = argv[j+1];
                argv[j+1] = temp;
            }
        }
    }

    // display the sorted arguments, one per line
    for (i = 1; i < argc; i++) {
        char *arg = argv[i];
        int j = 0;
        while (arg[j] != '\0') {
            write(1, &arg[j], 1); // write one character at a time
            j++;
        }
        write(1, "\n", 1); // write a newline after each argument
    }

    return 0;
}
