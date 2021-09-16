#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number that you want to insert in the array\n";
    int b;
    cin >> b;
    ++n;
    int i = n - 1;
    while (a[i] > b)
    {
        a[i + 1] = a[i];
        --i;
    }
    a[i + 1] = b;
    cout << "elements of the array after the \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
