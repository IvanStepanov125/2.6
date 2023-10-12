#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2, x3, x4;
    scanf("%d %d %d", &x1, &x2, &x3, &x4);

    if ((x1 != x2) && (x2 == x3)) printf("1");

    else if ((x1 != x2) && (x1 == x3)) printf("2");

    else if ((x3 != x2) && (x1 == x2)) printf("3");

    else printf("4");

    return 0;
}