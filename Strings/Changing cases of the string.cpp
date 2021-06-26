#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    string s;
    int l = 0;
    cout << "Enter the string\n";
    getline(cin, s);
    //The alphabets's cases are reversed using the ASCII values (concatation of string )
    //It can be done using system functions named islower()/isupper() and toupper()/tolower()
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }
    cout << "String after changing the case-->" << s << endl;
    return 0;
}
