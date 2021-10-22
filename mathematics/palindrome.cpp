#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int temp, r , sum ;
    sum = 0;
    temp = n;

    while(n>0){
        r = n%10;
        sum = (sum*10) + r;
        n  = n/10;
    }

   if (temp == sum){
       cout<<"no. is palindrome";
   }else{
       cout<<"no. is not a palindrome";
   }

    return 0 ;
}