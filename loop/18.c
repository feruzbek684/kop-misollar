#include <stdio.h>
int main () {
    int a, b;
    scanf("%d", &a);
    b = a % 10;
    while (a >= 10)
    {
        a = a / 10;
    }
    a = a % 10;
    if (b == a)
    {
        printf("teng%d%d",b, a);
    }
    if (b > a)
    {
        printf("oxirgi katta %d", b);
    }else {
        printf("boshidagi katta %d", a);
    }

    return 0;
    
    
    
    
}