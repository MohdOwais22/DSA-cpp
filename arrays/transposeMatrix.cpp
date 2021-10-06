//give a square matrix A and its number of rows (or columns) N, return the transpose of A.
//the  transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

#include <iostream>
using namespace std;
int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            //swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i]=temp;
        }
    }

    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";

        }cout<<"\n";
    }
    return 0;
}