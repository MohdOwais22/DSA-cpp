//find the no. of ways in n*m matrix
#include <iostream>
using namespace std;

int waysOfMatrix(int n, int m){
    if(n == 1 || m == 1){
        return 1;

        return waysOfMatrix(n-1,m) + waysOfMatrix(n,m-1);
    }
};

int main(){
    int a,b;
    cin>>a>>b;

    cout<<waysOfMatrix(a,b)<<endl;
    return 0;
}