#include <stdio.h>

void digit_combinations() {
    int i, j, k, count = 0;
    for(i = 0; i < 10; i++) {
        for(j = i+1; j < 10; j++) {
            for(k = j+1; k < 10; k++) {
                // calculate and print each combination using only int variables
                int comb = i*100 + j*10 + k;
                if(count > 0) {
                    printf(", ");
                }
                printf("%03d", comb);
                count++;
            }
        }
    }
}

int main() {
    digit_combinations();
    return 0;
}
