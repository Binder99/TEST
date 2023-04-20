#include <unistd.h>

void digit_combinations() {
    char buf[5]; // buffer to hold each combination
    int i, j, k ;
    for(i = 0; i < 10; i++) {
        for(j = i+1; j < 10; j++) {
            for(k = j+1; k < 10; k++) {
                buf[0] = i + '0'; // convert digits to characters
                buf[1] = j + '0';
                buf[2] = k + '0';
                buf[3] = ',';
                buf[4] = ' ';
                write(STDOUT_FILENO, buf, 5); // write buffer to stdout
                 // keep track of number of combinations
            }
        }
    }
    // remove the last comma and space
    char end[] = "\b\b";
    write(STDOUT_FILENO, end, 2);
}

int main() {
    digit_combinations();
    return 0;
}
