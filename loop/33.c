#include <stdio.h>
int main () {
    int a = 1, b = 800;  
    while (a <= b)
    {
        if (a % 8 == 0 && a % 5 == 0)
        {
            printf("%d ", a);
        } 
        a ++;
    }
    return 0;
    
    
}