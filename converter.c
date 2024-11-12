#include <stdio.h>

int main() {
    int lower, high, step;
    int fahr, celsius;

    lower = 0;
    high = 500;
    step = 5;

    fahr = high;
    while(fahr >= lower) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr - step;
    } 
       /* celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr - step;*/

    printf("Locked in, this is my villain era!! Working like a donkey to see the results!\n");
}