//wap to check if given no. is power of 2

#include <iostream>
using namespace std;


bool isPower2(int n){

    return  (n && !(n & (n-1)));
}
int main(){

    cout<<isPower2(11)<<endl;
    return 0;
} 