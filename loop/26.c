#include <stdio.h>
int main () {
    int n, a = 1, f = 2, e = 0;
    scanf("%d", &n);
    while (n >= f){
        e = 0;
        a = 1;
        while (a<=f){
            if (f % a == 0)
            {
                e = e + 1;
            }
            a++; 
        }
        if (e == 2){
            printf("%d ", f);
        }
        f ++;
    }

    return 0;
    
}