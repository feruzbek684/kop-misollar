#include <stdio.h>
int main () {
    int a, bir = 0, onlik = 0, yuzlik = 0, p = 0;
    scanf("%d", &a);
    bir = a % 10;
    onlik = (a % 100) / 10;
    yuzlik = a / 100;
    p = onlik * yuzlik;
    printf("onlik va yuzlik kopaytmasi %d", p);
    printf("\non %d", bir);


    return 0;
}