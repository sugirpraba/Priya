#include <stdio.h>
int main()
{
    int a,b;
    long c = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a>0)
    {
        c *= a;
        --b;
    }
    printf("Ans= %5d", c);
    return 0;
}
