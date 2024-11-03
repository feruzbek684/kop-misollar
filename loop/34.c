#include <stdio.h>
int main () {
    int a = 100, b = 5000;  
    while (a <= b)
    {
        if (a % 12 == 0 && a % 20 == 0 && a % 25 == 0)
        {
            printf("%d ", a);
        } 
        a ++;
    }
    return 0;
    
    
}