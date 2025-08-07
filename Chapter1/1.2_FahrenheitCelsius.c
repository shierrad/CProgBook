#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    /*while (fahr <= upper){
        celsius = 5.0 * (fahr-32.0)/9.0;
        fahr = fahr + step;
        printf("%3.0f \t %6.1f \n ", fahr, celsius);
    }*/
    for (fahr = 0; fahr <= upper; fahr += 20){
        printf("%3f %6.1f\n", fahr, (5.0/9.0)*(fahr -32.0));
    }
    return 0;
}


