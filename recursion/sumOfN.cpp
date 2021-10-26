//find the sum of N natural no. using recursion
#include <iostream>
using namespace std;

int sum(int n){
    if(n==1)
    return 1;

    return n+sum(n-1);
}

int main(){

    int n;
    cin>>n;
    //int sum;

   cout<<sum(n)<<endl;

    
    return 0;
}