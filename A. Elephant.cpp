#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int z = x/5;
    if(x%5!=0)
    {
        z++;
    }
    cout << z << endl;
}
