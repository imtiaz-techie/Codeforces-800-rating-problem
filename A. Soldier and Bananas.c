#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total_cost = 0;

    for (int i = 1; i <= w; i++)
        {
        total_cost += i * k;
        }

    int borrow = (total_cost > n) ? (total_cost - n) : 0;

    printf("%d\n",borrow);

    return 0;
}
