#include <iostream>
#define dontquit int main(void)
using namespace std;

dontquit
{
    ios_base::sync_with_stdio(0);
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int A[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int largest = A[0];
    int sec_largest = A[1];
    for (int i = 0; i < n; i++)
    {
        if (largest < A[i])
        {
            largest = A[i];
        }
        else if (sec_largest < A[i] && largest > sec_largest)
        {
            sec_largest = A[i];
        }
    }
    
    cout << "Largest element of the array =" << largest << endl;
    cout << "Second Largest element of the array =" << sec_largest << endl;

    return 0;
}
