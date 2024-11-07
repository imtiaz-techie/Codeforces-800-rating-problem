#include<bits/stdc++.h>
using namespace std;
int main()
{
                int t;
                cin >> t;
                while(t--)
                {
                                int n;
                                cin >> n;
                                vector <int> a(n);
                                for(int i = 0; i<n ;i++)
                                {
                                                cin >> a[i];
                                }
                                int x;
                                if(a[0] == a[1] || a[0] == a[2])
                                                x = a[0];
                                else
                                {
                                                cout << 1 << endl;
                                                continue;
                                }
                                for(int i = 0; i<n ; i++)
                                {
                                                if(a[i] != x)
                                                {
                                                                cout << i+1 << endl;

                                                }
                                }
                }
}

