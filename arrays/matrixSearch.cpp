//2D Matrix search
//given a n*m matrix
//write an algorithm to find that the given value exists int the matrix or not.
//integers in each row are sorted in ascending from legt to roght. integers in each column are sorted in ascending from top to bottom

 #include <iostream>
 using namespace std;
 int main(){
     int n,m;
     cin>>n>>m;
     int target;
     cin>>target;
     int mat[n][m];
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>>mat[i][j];
         }
     }
        int r=0,  c=m-1;
        bool found = false;
        while(r>0 && c>=0){
            if(mat[r][c]==target){
                found =true;
            
            }else if(mat[r][c]>target){
                c--;
            }else{
                r++;
            }
        }

        if(found){
            cout<<"element found ";
        }else{
            cout<<"element does not exist";
        }
     
     return 0;
 }

 //ans matrix
//  3 3 10
// 1 2 3
// 4 5 6
// 7 8 9