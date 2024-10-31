#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string exp;
        cin >> exp;

        // Extract 'a' and 'b' as characters
        int a = exp[0] - '0';
        int b = exp[2] - '0';

        cout << a + b << endl;
    }

}

