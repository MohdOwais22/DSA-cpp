//find the only non-repeating element in an array where everry element repeats twice?
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {5, 4, 1, 4, 3, 5, 1};

    int res = 0;
    for (int i = 0; i < 7; i++)
    {
        res = res^ arr[i];

    }

    cout<<res<<endl;
    return 0;
}