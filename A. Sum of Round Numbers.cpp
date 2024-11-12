#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> round_numbers;
        int place_value = 1;


        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                round_numbers.push_back(digit * place_value);
            }
            n /= 10;
            place_value *= 10;
        }


        cout << round_numbers.size() << endl;
        for (int round_num : round_numbers) {
            cout << round_num << " ";
        }
        cout << endl;
    }


}

