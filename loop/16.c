#include <stdio.h>
int main () {
    int a, b = 1, s;
    q:
    scanf("%d", &a);
    while (b <= 10 && a <= 10 && a >= 1)
    {
        s = a * b;
        printf("\n%dx%d=%d",a, b,s);
        b ++;
    }
    if (a > 10 || a < 1)
    {
        goto q;
    }
    
    return 0;
    
}