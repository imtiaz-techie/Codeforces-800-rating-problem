#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        int currentNumber = 0;
        int count = 0;

        while (count < k)
        {
            currentNumber++;
            // Check if the number is not divisible by 3 and does not end in 3
            if (currentNumber % 3 != 0 && currentNumber % 10 != 3)
            {
                count++;
            }
        }

        cout << currentNumber << endl;
    }

}

