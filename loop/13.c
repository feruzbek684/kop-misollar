#include <stdio.h>
int main () {
    int a, b, sum = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a <= b)
    {
        if (a % 7 == 0 && a % 2 == 0)
        {
            if (a % 6 == 0 && a % 4 == 0)
            {
                sum = sum + a;
                printf("%d ", a);
            }
            
            
        }
        a ++;
        
    }
    printf("\n%d", sum);
    return 0;

    
}