#include<iostream>
using namespace std;
int main()
{
       int n,k;
       cin >> n >> k;
       int i = 1;
       while(k--)
       {
            if(n%10!=0){
                                n-=1;}
                                else
                                {
                                                n/=10;
                                }
                                i++;
       }
       cout << n;
}
