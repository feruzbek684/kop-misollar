#include <stdio.h>
int main () {
    int a, b;
    scanf("%d", &a);
    b = 2 * a;
    while (a <= b)
    {
        printf("%d ", a);
        a ++;
    }
    return 0;
    
    
}