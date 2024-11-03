#include <stdio.h>
int main () {
    int a, b, c;
    printf("natural sonni kiritng: ");
    scanf("%d", &a);
    b = a % 10;
    while (a> 0)
    {
        a = a / 10;
        c = a % 10;
        if (c < b)
        {
            
        }else{
            b = c;
        }
        
    }
    printf("eng kattasi %d", b);

    return 0;
    
}