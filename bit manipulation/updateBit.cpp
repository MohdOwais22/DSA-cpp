#include <iostream>
using namespace std;


int updateBit(int n, int pos, int k){

    int mask = ~(1<<pos);
    n = n & mask;

    return (n | (k<<pos));
}
int main(){
    
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}