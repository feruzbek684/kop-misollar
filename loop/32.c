#include <stdio.h>
int main () {
    int a = 1, b = 500;  
    while (a <= b)
    {
        if (a % 8 == 0)
        {
            printf("%d ", a);
        } 
        a ++;
    }
    return 0;
    
    
}