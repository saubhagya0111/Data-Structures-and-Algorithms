#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int n, pos, x;
    cout << "Enter the size of the array\n";
    cin >> n;
    int A[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the element to be inserted\n";
    cin >> x;
    cout << "Enter the position of insertion\n";
    cin >> pos;
    ++n;
    //Size of the array is increased by one
    //Shifting each element so as to make room for the element at the desiered position
    for (int i = n - 1; i >= pos - 1; i--)
        A[i + 1] = A[i];
    A[pos - 1] = x;

    cout << "Elements of the array after insertion are\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
