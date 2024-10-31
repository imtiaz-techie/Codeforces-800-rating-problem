#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string input, result;
    cout << "Enter a string: ";
    getline(cin,input);

    bool new_word = false;

    for (char ch : input)
    {
        if (isalpha(ch))
        {
            if (new_word && !result.empty())
            {
                result += '_';
            }
            result += tolower(ch);
            new_word = false;
        }
    else
        {
            new_word = true;
        }
    }

    cout << "Snake Case Output: " << result << endl;

}

