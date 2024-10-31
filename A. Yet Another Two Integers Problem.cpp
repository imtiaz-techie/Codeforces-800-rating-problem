#include<iostream>
using namespace std;
int main()
{
                int t;
                cin >> t;
                while(t--)
                {
                                int a,b;
                                cin >> a >> b;
                                int dif = abs (a - b);
                                int ans = (dif + 9) / 10;
                                cout << ans <<endl;
                }
}

