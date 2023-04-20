#include <stdio.h>

void digit_combinations() {
    int i, j, k;
    for(i = 0; i < 10; i++) {
        for(j = i+1; j < 10; j++) {
            for(k = j+1; k < 10; k++) {
                printf("%d%d%d, ", i, j, k);
            }
        }
    }
    printf("\b\b"); // to remove the last comma and space
}

int main() {
    digit_combinations();
    return 0;
}
