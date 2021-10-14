#include <iostream>
using namespace std;
int main(){

    int a;
    cin>>a;

    if((a & 1) == 0){
        cout<<a<<" is an even number";
    }else{
        cout<<a<<" is an odd number";
    }
    return 0;
}