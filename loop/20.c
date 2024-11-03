#include <stdio.h>
int main () {
    int a, b = 0, s;
    scanf("%d", &a);
    while (a > 0)
    {
        s = a % 10;
        if (s % 2 != 0)
        {
            b = b + s;
        }
        a = a/ 10;
        
    }
    printf("%d", b);

    return 0;
    
}