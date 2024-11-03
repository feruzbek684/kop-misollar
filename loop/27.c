#include <stdio.h>
int main () {
    int a, b = 0, odd = 0, even = 0;
    while (b <= 5)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even = even + a;
        }
        odd = odd + a;
        
        
    }
    printf("%d", even);
    printf("%d", odd);
    return 0;
    
}