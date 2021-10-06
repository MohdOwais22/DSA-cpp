// An arithmetic array is an array that contains atleast 2 integers and the differences between consecutive integers are equal.
// sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose a contigous arithmetuc subarray from her array thart has the max. length. Help her to determine the length of the longest contigous arithmetic subarray.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}