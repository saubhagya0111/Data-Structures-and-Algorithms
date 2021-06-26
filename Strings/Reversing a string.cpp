#include <iostream>
using namespace std;
int main()
{
    string s, s1;
    int flag = 0, vowel = 0;
    cout << "Enter the string\n";
    getline(cin, s);
    int l = s.length();
    //Using the property of concatenation of strings
    for (int i = s.length(); i >= 0; i--)
    {
        s1 += s[i];
    }
    cout << "Reversed string-->" << s1 << endl;

    return 0;
}
