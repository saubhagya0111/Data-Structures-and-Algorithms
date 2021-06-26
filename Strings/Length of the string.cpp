#include <iostream>                                                                         
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    string s;
    int l = 0;
    cout << "Enter the length of the string\n";
    //Can be found out using the strlen() function of the header file <string.h> and .length() function
    getline(cin, s);
    while (s[l]!='\0')
    {
        l++;
    }
    cout << "length=" << l << endl;
    return 0;
}
