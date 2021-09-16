#include <iostream>
#include <cmath>
using namespace std;
int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n, n1;
    cout << "Enter the last natural number in the array\n";
    cin >> n1;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Find the sum of the entire array and then subtract it from the sum of n natural numbers difference gives the missing number
    cout << "Missing number=" << abs(sum(a, n) - (n1 * (n1 + 1) * 0.5)) << endl;
    return 0;
}
