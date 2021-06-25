#include <iostream>                                                                         
#define dontquit int main(void)
using namespace std;

dontquit
{
    ios_base::sync_with_stdio(0);
    int n;
    cout << "Enter the size of an array\n";
    cin>>n;
    cout << "Enter the elements of the array\n";
    //Dynamic Initialization of an array
    int A[n];
    //Traversal of the elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Elements of the array are:-\n";
    for (int i = 0; i < n; i++)
    {
        cout<< A[i]<<" ";
    }
    //initializing the elements of the array statically
    int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //Size of the array can be found using the following method
    int size = sizeof(B) / sizeof(B[0]);
    cout << "Elements of the array B are\n";
    for (int i = 0; i < size; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}
