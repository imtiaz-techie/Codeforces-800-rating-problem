#include<bits/stdc++.h>
using namespace std;
int main()
{
                int n;
                cin >> n;
                int flag = 1;
                if(n%4==0 || n%7==0 || n%47==0 || n%477==0)
                   {
                                   flag = 0;
                   }
                   if(flag==0)

                {
                                cout << "YES" << endl;
                }
                else
                {
                                cout << "NO" << endl;
                }
}

