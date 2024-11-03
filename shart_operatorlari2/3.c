#include <stdio.h>
int main () {
    int a, b, c, d, e, f, juft = 0 , toq = 0 ;
    scanf("%d", &a);   
    scanf("%d", &b);   
    scanf("%d", &c);   
    scanf("%d", &d);   
    scanf("%d", &e);   
    scanf("%d", &f);   
    if (a % 2 == 0)
    {
        juft ++;
    }else if (a % 2 != 0) {
        toq ++;
    }
    if (b % 2 == 0)
    {
        juft ++;
    }else if (b % 2 !=0) {
        toq ++;
    }
    if (c % 2 == 0)
    {
        juft ++;
    }else if ( c % 2!= 0) {
        toq ++;
    }
    if (d % 2 == 0)
    {
        juft ++;
    }else if (d % 2 != 0) {
        toq ++;
    } 
        if (e % 2 == 0)
    {
        juft ++;
    }else if (e % 2 != 0) {
        toq ++;
    }
        if (f % 2 == 0)
    {
        juft ++;
    }else if (f % 2 != 0) {
        toq ++;
    }
    printf("juft %d\n", juft);
    printf("toq %d\n", toq );

    return 0;
}