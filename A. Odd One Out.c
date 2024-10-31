#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d",&a,&b,&c);

        int answer;
        if (a == b)
        {
            answer = c;
        }
        else if (b == c)
        {
            answer = a;
        }
        else
        {
            answer = b;
        }

        printf("%d\n",answer);
    }

    return 0;
}
