#include <stdio.h>
int main () {
    int a, b = 1;
    scanf("%d", &a);
    while (b < ((a - 1)/2))
    {
        b = b + 1;
        if (a % b == 0)
        {
            printf("tub son emas");
            break;
        }
    printf("tub son");
         
    }

    return 0;
    
}