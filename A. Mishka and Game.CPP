#include<bits/stdc++.h>
using namespace std;
int main()
{
          int t;
          cin >> t;
          int count_m = 0;
                           int count_c = 0;
          while(t--)
          {
                          int m,c;

                          cin >> m >> c;

                          if(m>c)count_m++;
                          if(m<c)count_c++;
          }


                          if(count_m > count_c)
                          {
                                          cout << "Mishka" << endl;
                          }
                          else if(count_m == count_c)
                          {
                                          cout << "Friendship is magic!^^" << endl;
                          }
                          else
                          {
                                          cout << "Chris" << endl;
                          }


}
