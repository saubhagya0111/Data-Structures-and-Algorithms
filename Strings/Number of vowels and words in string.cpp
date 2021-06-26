#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    string s;
    int word = 1, vowel = 0;
    cout << "Enter the string\n";
    getline(cin, s);
    //Assumption each word ends with a space and the bare minimum words in string=1
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            word++;
        }
        else if (s[i] == 'a' ||  s[i] == 'e' || s[i] == 'i'||  s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel++;
        }
    }
    cout << "Number of words=" << word << endl;
    cout << "Number of vowel=" << vowel << endl;
    return 0;
}
