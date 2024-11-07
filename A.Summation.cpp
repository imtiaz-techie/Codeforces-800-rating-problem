#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    long long sum2 = 0;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        sum += num;
    sum2 = abs(sum);
    }

    cout << sum2 << endl;

}

