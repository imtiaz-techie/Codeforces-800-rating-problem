#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of sentences: ";
    cin >> n;
    cin.ignore();

    int max_words = 0;

    int i = 0;
    while(n--)
    {
        string sentence;
        cout << "Enter Sentence " << i + 1 << ": ";
        getline(cin, sentence);


        int word_count = 1;
        for (char ch : sentence)
        {
            if (ch == ' ')
            {
                word_count++;
            }
        }

        if (word_count > max_words)
        {
            max_words = word_count;
        }
        i++;
    }

    cout << "Maximum Number of Words Found in Sentences: " << max_words << endl;

}

