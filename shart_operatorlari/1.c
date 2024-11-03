#include <stdio.h>
int main () {
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &s);
    if (a > b && a > s)
    {
        printf("katta son %d", a);
    }else if (b > a && b > s){
        printf("katta son%d", b);
    }else if (s > a && s > b) {
        printf("katta son %d", s);
    }else {}
    return 0;
    
}