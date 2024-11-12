#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i)
                {
        cin >> heights[i];
    }

    int minWidth = 0;
    for (int i = 0; i < n; ++i)
    {
        if (heights[i] > h)
        {
            minWidth += 2;
        }
        else
        {
            minWidth += 1;
        }
    }
    cout << minWidth << endl;

}


