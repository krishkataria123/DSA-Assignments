#include<iostream>
using namespace std;

int main(){
    int mat[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int rows=sizeof(mat)/sizeof(mat[0]);
    int cols=sizeof(mat[0])/sizeof(mat[0][0]);

    // cout<<"Diagonal elements :";
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(i==j){
    //             cout<<mat[i][i]<<" ";
    //         }
            
    //     }
    // }

    cout<<"tri triangular elements :";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j||i-j==-1||i-j==1){
                cout<<mat[i][j]<<" ";
            }
            
        }
    }

    // cout<<"lower triangular elements :";
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(i>=j){
    //             cout<<mat[i][j]<<" ";
    //         }
            
    //     }
    // }

    // cout<<"upper triangular elements :";
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(i<=j){
    //             cout<<mat[i][j]<<" ";
    //         }
            
    //     }
    // }
    
    return 0;
}