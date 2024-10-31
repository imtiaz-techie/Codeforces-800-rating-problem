#include<iostream>
#include<string>
using namespace std;
int main()
{
                int n;
                cin >> n;
                string str;
                cin >> str;
                int count = 0;
                int i = 1;
                while(i<n)
                {
                    if(str[i] == str[i-1])
                    count++;
                    i++;


                }
                cout << count << endl;
}
