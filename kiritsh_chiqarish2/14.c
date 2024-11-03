#include <stdio.h>
int main () {
    int a, bir = 0, onlik = 0, yuzlik = 0;
    scanf("%d", &a);
    bir = a % 10;
    onlik = (a % 100) / 10;
    yuzlik = a / 100;
    printf("\nbir %d", bir);
    printf("\non %d", onlik);
    printf("\nyuz %d", yuzlik);


    return 0;
}