#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool is_anagram(string s1, string s2)
{
    ll n1 = s1.length(), n2 = s2.length();
    //Strings cannot be anagrams if they are of unequal lengths
    if (n1 != n2)
    {
        return 0;
    }
    //Sorting the strings so that the strings become uniform using the sort function
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            return 0;
            //Loop terminates if any of thr instances aren't equal and returns false
            break;
        }
    }
    //If none of the constraints above happen it gives out true
    return 1;
}
int main()
{
    string s1, s2;
    cout << "Enter the first string\n";
    cin >> s1;
    cout << "Enter the second string\n";
    cin >> s2;
    ll result = is_anagram(s1, s2);
    if (result == 1)
    {
        cout << "Strings are anagrams\n";
    }
    else
    {
        cout << "Strings are not anagrams\n";
    }

    return 0;
}
