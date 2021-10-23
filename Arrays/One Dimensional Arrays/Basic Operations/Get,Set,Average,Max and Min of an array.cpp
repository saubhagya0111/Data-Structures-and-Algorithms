#include <iostream>
using namespace std;
//Function returns the corresponding element to the index entered in the array
int get(int a[], int n, int i)
{
    if (i >= 0 && i <= (n - 1))
    {
        return a[i];
    }
}
//This function updates the element at the index entered by the user
int set(int a[], int n, int i, int key)
{
    //Time complexity: O(1)
    if (i >= 0 && i <= (n - 1))
    {
        a[i] = key;
    }
}
//Returns the maximum element of the array
int max_element(int a[], int n)
{
    //Time complexity: O(1)
    int key = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > key)
        {
            key = a[i];
        }
    }
    return key;
}
//Returns the minimum element of the array
int min_element(int a[], int n)
{
    //Time complexity: O(N)
    int key = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < key)
        {
            key = a[i];
        }
    }
    return key;
}
//Finds the sum of the elements stored in the array
int sum(int a[], int n)
{
    //Time complexity: O(N)
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}
//Finds the sum of the elements stored in the array using recursion
int sum_recursion(int a[], int n)
{
    //Time complexity: O(N)
    int s = 0;
    if (n == 1)
    {
        return a[0];
    }
    return s + sum_recursion(a, n - 1);
}
//Used to find the average of the elements of the array
int avsrage(int a[],int n)
{
    int s1 = sum(a, n);
    return s1 / n;
}
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
}
