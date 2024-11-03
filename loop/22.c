#include <stdio.h>
int main () {
    int q, w, e, r;
    scanf("%d", &w);
    e = w % 10;
    while (w > 0)
    {
        w = w / 10;
        q = w % 10;
        if (q < e)
        {
            
        }else
        {
            e = q;
        }
        
        
    }

    printf("%d", e);

    return 0;
    
}