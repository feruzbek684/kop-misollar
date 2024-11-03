#include <stdio.h>
int main () {
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &s);
    if (a > b && a > s)
    {
        printf(".%d", a);
    }else if (b > a && b> s){
        printf(".%d", b);
    }else if (s > a && s > b) {
        printf(".%d", s);
    }
    return 0;
    
}