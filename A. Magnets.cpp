#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int count = 1;
string a;
cin>> a;
for(int i = 1; i<n; ++i)
{
string b;
cin >> b;
if(a!=b)
{
count++;}
a = b;
}
cout << count << endl;

}
