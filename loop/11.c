#include <stdio.h>
int main () {
    int a = 1, b;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a <= b)
    {
        if (a % 7 == 0 && a % 5 == 0 && a % 3 == 0)
        {
            printf("%d ", a);
        }
        a ++;
        
    }
    return 0;

    
}