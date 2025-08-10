#include <stdio.h>

float m = (5.0/9.0); 
float b = 32.0;

float fToC(float fahr){
    return m*(fahr - b);
}

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    for (fahr = 0; fahr <= upper; fahr += 20){
        printf("%3f %6.1f\n", fahr, fToC(fahr));
    }
    return 0;
}


