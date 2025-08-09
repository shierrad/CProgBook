#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c, nw, nc, state, max;
    int currWC = 0;
    int maxChars = 20;
    int bins[maxChars];

    state = OUT;
    nw = nc = 0;
    
    for (int i = 0; i< maxChars; ++i)
        bins[i] = 0;
    
    //Fill histogram
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
    //Find highest count
    max = 0;
    for (int i = 2 ; i<maxChars; ++i){
        if (bins[i] >= bins[i-1]){
            if (bins[i] > max){ 
                max = bins[i];
            }
        } else {
            if (bins[i-1] > max){
                max = bins[i-1];
            }
        }
    }
    // print histogram from top to bottom
    for (int j = max ; j > 0 ;  --j){
        printf("%d ‾|", j);
        for (int i = 1 ;  i < maxChars ;  ++i){      
                if ( bins[i] >= j){
                    printf("# ");
                } else {
                    printf("  ");
                }
            
        }
        printf("\n");
    }
    // print footer with the number of characters
    printf("   ");
    for (int i = 1; i < maxChars; ++i){
        printf("¯¯");
    }
    printf("\n");
    printf("   ");
    for (int i = 1 ;  i < maxChars ; ++i){
        printf("|%d",i % 10);
    }
}
