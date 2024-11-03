#include <stdio.h>
int main () {
    int a = 1, b = 345;
    while (a <= b)
    {
        if (a % 7 == 0 && a % 9 == 0)
        {
            if (a % 5 != 0 && a % 10 != 0)
            {
                printf("%d ", a);
            }
            
            
        }
        a ++;
        
    }
    return 0;

    
}