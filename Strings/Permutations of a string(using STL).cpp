#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;
//The STL function returns true/false as long the values are lexigraphically (in a order in the dictionary) distinct
//The function will print the possible values of permutation
void permute(string s)
{
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutations(s.begin(), s.end()));
}
int main()
{
    string s;
    cout << "Enter the string\n";
    cin >> s;
    permute(s);
    return 0;
}
