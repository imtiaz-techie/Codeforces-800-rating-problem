#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);

    if (1<=w && w<=100 && w%2==0 && w!=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
