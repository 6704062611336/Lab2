#include <stdio.h>

int main() {
    int a, b, c, d;
    int max1, max2;

    printf("Enter 4 : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max1 = (a>b)?a:b;
    max1 = (max1>c)?max1:c;
    max1 = (max1>d)?max1:d;

    max2 =(a<max1)?a:(b<max1)?b:c;
    max2 =(b>max2 && b<max1)?b:max2;
    max2 =(c>max2 && c<max1)?c:max2;
    max2 =(d>max2 && d<max1)?d:max2;

    printf("%d\n", max2);

    return 0;
}
