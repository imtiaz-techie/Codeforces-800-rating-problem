#include<bits/stdc++.h>
using namespace std;
int main()
{
                int arr [50];
                for(int i = 0; i < 3; i++)
                {
                                cin >> arr[i];
                }
                sort(arr,arr+3);
                cout << arr[2] - arr[0] << endl;
}
