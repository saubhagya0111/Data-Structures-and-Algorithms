#include <iostream>
using namespace std;
int main()
{
    string s;
    int flag = 0, vowel = 0;
    cout << "Enter the string\n";
    getline(cin, s);
    //Every email id consists of '@' symbole
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '@')
        {
            flag++;
        }
    }
    if (flag == 0)
    {
        cout << "Invalid Email id\n";
    }
    else
    {
        cout << "Valid Email id\n";
    }

    return 0;
}
