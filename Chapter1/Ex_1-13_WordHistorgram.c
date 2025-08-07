#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c, nw, nc, state;
    int currWC = 0;
    int maxChars = 20;
    int bins[maxChars];

    state = OUT;
    nw = nc = 0;
    
    for (int i = 0; i< maxChars; ++i)
        bins[i] = 0;
    
    while ((c = getchar()) != EOF){
        if ( c ==' ' || c == '\n' || c == '\t'){
            if (state == IN){ 
                ++bins[currWC];
                currWC = 0;
                state = OUT;
            }
        } 
        else { 
            ++currWC;
            state = IN;
        }
    }
    for (int i = 0 ; i<maxChars; ++i){
        printf("%d, %d \n", i, bins[i]);
    }
    printf("  #\n");
    printf(" ##\n");
    printf(" ##\n");
}
