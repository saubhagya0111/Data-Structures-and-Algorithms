#include <iostream>
#define dontquit int main(void)
#define f first
#define l last
using namespace std;
dontquit
{
    ios_base::sync_with_stdio(0);
    //Can be automated using the STL function *max_element and *min_element
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int A[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int f = A[0];
    int l = A[1];
    for (int i = 0; i < n; i++)
    {
        if (f > A[i])
        {
            f = A[i];
        }
        else if (l > A[i] && l > f)
        {
            l = A[i];
        }
    }
    cout << "smallest element==" << f << endl;
    cout << "Second smallest element==" << l << endl;

    return 0;
}
