#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag = 0;
    cout << "Enter the string\n";
    getline(cin, s);
    //Refer the array folder for detailed explanation and documentation (process is ~ similar)
    for (int i = 0; i <= s.length(); i++)
    {
        for (int j = i + 1; j <= s.length(); j++)
        {
            if (s[i] == s[j])
            {
                flag = 1;
                cout << s[i] << endl;
            }
        }
    }
    if (flag==0)
    {
        cout << "No duplicate elements found\n";
    }
    return 0;
}
