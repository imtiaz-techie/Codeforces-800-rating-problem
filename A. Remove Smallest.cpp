#include<bits/stdc++.h>
using namespace std;
int main()
{
         int t;
         cin >> t;
         while(t--)
         {
                         int n;
                         cin >> n;
                         int arr[n];
                         for(int i = 0; i<n ;i++)
                         {
                                         cin >> arr[i];
                         }
                         sort(arr,arr+n);
                         int flag = 1;
                         for(int i = 1; i<n ;i++)
                         {
                                int result = arr[i] - arr[i-1];
                                if(result >1){
                                                flag = 0;
                                                break;
                                }

                         }
                         if(flag == 1)
                         {
                                         cout << "YES" << endl;
                         }
                         else
                         {
                                         cout << "NO" << endl;
                         }

         }
}
