#include <stdio.h>
int main () {
    int a = 1, b = 1000;
    while (a <= b)
    {
        printf("%d ", b);
        b = b - 10;
    }

    return 0;
    
}