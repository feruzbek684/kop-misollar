#include <stdio.h>
int main () {
    int a = 1, b;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a <= b)
    {
        if ( a % 3 == 0 && a % 8 == 0 && a % 2 == 0)
        {
            printf("%d ", a);
        }
        a ++;
        
    }
    return 0;

    
}