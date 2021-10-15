//find the two non-repeating element in an array where every element repeats twice

#include <iostream>
using namespace std;

int twoNonRepeatingElements(int arr[], int n, int *x, int *y)
{
    int res = arr[0];
    *x = 0;
    *y = 0;
    for (int i = 1; i < n; i++)
    {
        res = res ^ arr[i];
    }

    //int size_of_bit = (n & ~(n - 1));
    int size_of_bit = (res & ~(res - 1));

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & size_of_bit)
        {
            *x = *x ^ arr[i];
        }
        else
        {
            *y = *y ^ arr[i];
        }
    }
    return *x, *y;
}
int main()
{

    int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
    int n = sizeof(arr) / sizeof(*arr);
    int *x = new int[sizeof(int)];
    int *y = new int[sizeof(int)];

    twoNonRepeatingElements(arr, n, x, y);
    cout << "the two non-repeating elements arr " << *x << " " << *y << endl;
    return 0;
}