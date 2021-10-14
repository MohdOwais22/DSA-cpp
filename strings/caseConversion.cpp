#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    //to uppercase
    string str = "kasdhlkheiub";

    // for(int i=0 ;i<=str.length();i++){
    //     if(str[i]>'a' || str[i]<'z' ){
    //         str[i]-= 32;
    //     }
    // }
    // cout<<str<<endl;
        transform(str.begin(), str.end(), str.begin() ,:: toupper);
        cout<<str<<endl;

    //to lowercase
    string str1 = "HADLJFHUIBEIUE";

    // for(int i=0 ;i<=str1.length();i++){
    //     if(str1[i]>'A' || str1[i]<'Z' ){
    //         str1[i]+= 32;
    //     }
    // }
    // cout<<str1<<endl;
    transform(str1.begin(), str1.end(), str1.begin() ,:: tolower);
    cout<<str1<<endl;
    return 0;
}