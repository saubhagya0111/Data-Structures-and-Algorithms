#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1;
    int flag = 0;
    cout << "Enter the string which is to be checked for a palindrome\n";
    getline(cin, s);
    int l = s.length();
    //Using the property of concatenation of strings
    //reversing the string using an empty string
    for (int i = s.length(); i >= 0; i--)
    {
        s1 += s[i];
    }
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] != s[l - i - 1])
        {
            flag = 1;
            cout << "Not a palindrome\n";
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Palindromic string\n";
    }
    return 0;
}
