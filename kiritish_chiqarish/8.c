#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > 0)
    {
        printf("+5\n");
    }
    else if ( b > 0)
    {
        printf("+5\n");
    }
    else if ( c > 0)
    {
        printf("+5\n");
    }
    else if (a < 0)
    {
        printf("-5\n");
    }
    else if (b < 0)
    {
        printf("-5\n");
    }
    else if (c < 0)
    {
        printf("-5\n");
    }
    else if (a == 0)
    {
        printf("5\n");
    }
    else if (b == 0 )
    {
        printf("5\n");
    } 
    else if (c == 0)
    {
        printf("5\n");
    }else {}     
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    return 0;
}