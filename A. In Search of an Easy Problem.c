#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    int is_hard = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] == 1)
        {
            is_hard =1;
            break;
        }
    }
    if(is_hard)
        printf("HARD\n");
    else
        printf("EASY\n");
}
