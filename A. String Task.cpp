#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string answer = "";

    for (char ch : str)
    {
        ch = tolower(ch);

        if (ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i')
        {
            answer += '.';
            answer+= ch;
        }
    }

    cout << answer << endl;

}
