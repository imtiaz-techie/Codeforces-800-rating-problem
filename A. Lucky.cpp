#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string tic;
cin >> tic;
int a = ((tic[0] - '0') + (tic[1] - '0') + (tic[2] - '0'));
int b =((tic[3] - '0') + (tic[4] - '0') + (tic[5] - '0'));
if(a == b)
{cout << "YES" << endl;}
else{
cout << "NO" << endl;}


}

}
