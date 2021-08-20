#include <iostream>
using namespace std;
int main()
{
    //Time Complexity:- O(n^2)
    //As the array is traversed twice (presence of nested loops)
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout << "Elements of the array after sorting are:-\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}
