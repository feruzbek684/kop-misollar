#include <stdio.h>
int main () {
    int a, b, c = 0, d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a <= b)
    {
        if (a / 2 == 0 && b / 2 == 1)
        {
            c = b + c;
        }else
        {
            d = a + d;
        }
        a = a + 1;
        
        
    }
    d = c + d;
    printf("%d", d);
    
}