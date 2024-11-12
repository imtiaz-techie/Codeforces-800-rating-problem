#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;

        int x = 0, y = 0;
        int flag = 0;

        for (int i = 0; i < 20; i++)
        {
                        for(int j = 0; j<n;j++)
                        {
                                 if (s[j] == 'N') y += 1;
            else if (s[j] == 'E') x += 1;
            else if (s[j] == 'S') y -= 1;
            else if (s[j] == 'W') x -= 1;

            if (x == a && y == b)
            {
                flag = 1;
                break;
            }
                        }
        }
        if(flag)
        {
                        cout << "YES" << endl;
        }
        else
        {
                        cout << "NO" << endl;
        }


    }


}
