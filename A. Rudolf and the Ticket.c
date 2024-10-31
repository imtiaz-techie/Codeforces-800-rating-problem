#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int l_coins[n], r_coins[m];

        for (int i = 0;i < n; i++)
        {
            scanf("%d",&l_coins[i]);
        }

        for (int i = 0;i < m; i++)
        {
            scanf("%d",&r_coins[i]);
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (l_coins[i] + r_coins[j] <= k)
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
