#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string given = "hello";
    int j = 0;
    for (char ch : s)
    {

        if (ch == given[j])
        {
            j++;
        }
        if (j == given.size())
        {
            break;
        }
    }

    if (j == given.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
