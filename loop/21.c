#include <stdio.h>
int main () {
    int a = 1, b;
    scanf("%d", &b);

    while (b >=2)
    {
        a = a * b *(b - 1);
        b = b - 2;
    }

    printf("%d ", a);
    
}