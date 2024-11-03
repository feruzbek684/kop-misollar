#include <stdio.h>
int main () {
    int a = 1, b = 10;
    while (a <= b)
    {
        if (a % 3 == 0)
        {
            printf("%d ", a);
        }
        a++;
        
    }
    return 0;
    
}