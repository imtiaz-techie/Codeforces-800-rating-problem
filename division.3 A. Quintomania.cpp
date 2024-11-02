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
                                vector <int> v(n);
                                for(int i = 0;i<n;i++)
                                {
                                                cin>> v[i];
                                }

                                int flag = 1;
                                for(int i = 0; i < n - 1;i++)
                                {
                                                int def = abs(v[i] - v[i+1]);
                                                if((def != 5) && (def != 7))
                                                {
                                                     flag = 0;
                                                     break;
                                                }
                                }
                                if(flag == 1)
                                {
                                                cout << "YES" << endl;
                                }
                                else
                                {
                                                cout << "NO" << endl;
                                }
                }
}

