#include <stdio.h>
int main () {
    int a, bir = 0, onlik = 0, yuzlik = 0, p = 0;
    scanf("%d", &a);
    bir = a % 10;
    onlik = (a % 100) / 10;
    yuzlik = a / 100;
    p = bir + yuzlik;
    printf("birlik va yuzlik qoshishmasi %d", p);
    printf("\non %d", onlik);


    return 0;
}