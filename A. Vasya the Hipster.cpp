#include<bits/stdc++.h>
using namespace std;
int main()
{
                int a,b;
                cin >> a >> b;
                int max = min(a,b);
                int z = abs(a-b);
                int diff = z/2;
                cout << max << ' ' << diff << endl;
}

