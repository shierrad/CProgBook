#include <stdio.h>

int main() {
    int c;
    int nS = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' '){
            nS++;
        } else {
            if (nS > 0){
                printf(" ");
                putchar(c);
                nS = 0;
            } else {
                putchar(c);
            }
        }
    }
    return 0;
}
