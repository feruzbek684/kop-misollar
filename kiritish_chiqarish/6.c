#include <stdio.h>
int main () {
    int son, son1, son2;
    scanf("%d", &son);
    scanf("%d", &son1);
    scanf("%d", &son2);
    if (son > son1 && son > son2)
    {
        printf("%d", son);
    }
    else if (son1 > son && son1 > son2)
    {
        printf("%d", son1);
    }
    else if (son2 > son && son2 > son1)
    {
        printf("%d", son2);
    }else {
        printf("kattasi yoq");
    }

    return 0;
}