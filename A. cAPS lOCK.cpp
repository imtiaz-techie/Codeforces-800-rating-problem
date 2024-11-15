#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool isCapsLock = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            isCapsLock = false;
            break;
        }
    }
    if (isCapsLock)
    {
        for (char &ch : s)
        {
            ch = isupper(ch) ? tolower(ch) : toupper(ch);
        }
    }
    cout << s << endl;
}

