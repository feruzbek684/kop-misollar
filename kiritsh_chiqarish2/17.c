#include <stdio.h>
int main () {
    int a, bir = 0, onlik = 0, yuzlik = 0, p = 0;
    scanf("%d", &a);
    bir = a % 10;
    onlik = (a % 100) / 10;
    yuzlik = a / 100;
    p = (bir * 100) + (onlik * 10) + yuzlik;
    printf("%d", p);


    return 0;
}