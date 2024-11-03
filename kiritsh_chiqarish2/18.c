#include <stdio.h>
int main () {
    int a, bir = 0, onlik = 0, yuzlik = 0, ming = 0, p = 0;
    scanf("%d", &a);
    bir = a % 10;
    onlik = (a % 100) / 10;
    yuzlik = (a % 1000) / 100;
    ming = a / 1000;
    p = (bir * 1000) + (onlik * 100) + (yuzlik * 10) + ming;
    printf("%d", p);


    return 0;
}