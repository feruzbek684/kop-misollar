#include  <stdio.h>
int main () {
    int a;
    scanf("%d", &a);
    if (a % 7 == 0 && a % 5 == 0 && a % 3 == 0)
    {
        a = a * 2;
        printf("%d", a);
    }
    
    return 0;
    
}