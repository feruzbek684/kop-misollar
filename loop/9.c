#include <stdio.h>
int main () {
    int a = 40, b = 180;
    while (a <= b)
    {
        if (a % 7 == 0 && a % 2 == 0)
        {
            printf("%d ", a);
        }
        a ++;
        
    }
    return 0;

    
}