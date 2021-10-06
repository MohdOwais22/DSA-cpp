// isyana is given the number of visisotors ar her local theme park on N consecutive days. The number of visistors on the i-th day is Vi. A dau is record breaking if it satisfies both of the following conditions:
// i) the nummber of visisotrs ont  he day is strivtly larger than the number of visitors on each of the previous days.
// ii) either it is the last day, or the numner of visitors on the dau sis strictly larger than the number of visistors on the following day.
// Note that the very first day could be a record breaking day!

// please help isyana find out the number of record breaking days.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0 ;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }   
    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(ans,a[i]);

    }
    cout<<ans<<endl;
     return 0;
}