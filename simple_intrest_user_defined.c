#include <stdio.h>
int main()
{
    int p;
    int r;
    int t;
    int si;
    printf("\n enter the principal amount p=");
    scanf("%d", &p);
    printf("\n enter the rate of interest r=");
    scanf("%d", &r);
    printf("\n enter the time period t=");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("\n simple interest= %d",si);
    return 0;
}