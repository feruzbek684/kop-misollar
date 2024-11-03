#include <stdio.h>
int main () {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a % 2 != 0)
    {
        a = a * 3;
    }else if (a % 2 == 0) {
        a = a + 10;
    }
    if (b % 2 != 0)
    {
        b = b * 3;
    }else if (b % 2 == 0) {
        b = b + 10;
    }
    if (c % 2 != 0)
    {
        c = c * 3;
    }else if (c % 2 == 0) {
        c = c + 10;
    }
    if (d % 2 != 0)
    {
        d = d * 3;
    }else if (d % 2 == 0) {
        d = d + 10;
    }
    printf("\n%d ", a);
    printf("\n%d", b);
    printf("\n%d ", c);
    printf("\n%d ", d);


    return 0;
}