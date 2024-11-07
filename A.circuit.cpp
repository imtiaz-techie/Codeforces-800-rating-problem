#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, s[1003], on, off,i,minimum, maximum;
    cin>>t;
    while(t--)
    {
        on=0, off=0;
        cin>>l;
        for(i=0;i<2*l;i++)
        {
            cin>>s[i];
            if(s[i]==0)
                off++;
            else
                on++;
        }
        if(on%2==0 and off%2==0)
        {
            minimum = 0;
            maximum = min(on,off);
        }
        else
        {
            minimum = 1;
            maximum = min(on,off);
        }
        cout<< minimum <<  " " << maximum << endl;
    }
}
