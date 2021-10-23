#include <iostream>
#include <algorithm>
using namespace std;
//Program to merge two sorted arrays
/*Binary operations on an array:- 
1.Append: Adding an array to the other if there exists a free space in the existing array(same array is updated)
2.Concatnation: combining of two arrays is termed as concatanation it can be done using another array as well
3.comparison: compare the two arrays to find if they have the same set of elements on the corresponding positions
4.copy: copy the elements of one array into another
5.Merging: combining two arrays using auxiliary array
*/
void merged_array(int a[], int n1, int b[], int n2)
{
    int c[n1 + n2];
    //creating an auxiliary array which will store the elements of the array
    int i = 0, j = 0, k = 0;
    //Loop will continue upto the point where the both the array are non empty
    while (i < n1 && j < n2)
    {
        //comparing the elements of the array and inserting the smaller one at the appropriate index
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
            //incrementing the indices for the next iteration
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    //In case any of the elements are yet to be inserted (case with the array that has the larger size)
    for (; i < n1; i++)
    {
    //copying the elements of the array a to the resultant array C
        c[k++] = a[i];
    }
    for (; j < n2; j++)
    {
    //copying the elements of the array b to the resultant array C
        c[k++] = b[j];
    }
    cout << "ELements of the merged array are:-" << endl;
    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << c[i] << " ";
    }
    //Time Complexity: (Theta)(m+n)
}
int main()
{
    int a[] = {1, 3, 2, 4, 5, 6, 7, 8, 9};
    int b[] = {1, 5, 8, 4, 12, 6, 745, 8, 900};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    sort(a, a + n1);
    sort(b, b + n2);
    //Arrays must be sorted
}
