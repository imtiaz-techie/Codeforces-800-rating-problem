#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
                int t;
                 cin >> t;
                 while(t--)
                 {
                                 int n;
                                 string s;
                                 cin >> n >> s;
                                 if(n!=5)
                                 {
                                                 cout << "NO" << endl;
                                       continue;
                                 }
                                 sort(s.begin(), s.end());
                                 if(s == "Timru")
                                 {
                                                 cout << "YES" << endl;
                                 }
                                 else
                                 {
                                                 cout << "NO" <<endl;
                                 }
                 }
}
