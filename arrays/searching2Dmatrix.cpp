#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    bool flag = false;
    cout<<"searching...\n.\n.\n. "<<endl;
    for(int i=0 ;i<n;i++){
        for(int j=0 ;j<n;j++){
            if(arr[i][j]==key)
            cout<<i<<" "<<j<<endl;
            flag=true;
        }
    }
    if(flag){
        cout<<"Element found \n";
    }else{
        cout<<"Element not found\n";
    }
    
    return 0;
}