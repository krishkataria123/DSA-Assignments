#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows=sizeof(arr)/sizeof(arr[0]);
    int cols=sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<"Row sum is "<<endl;
    for(int i=0;i<rows;i++){
        int rowsum=0;
        for(int j=0;j<cols;j++){
            rowsum+=arr[i][j];
        }
        cout<<"Row sum of "<<i<<"is"<<rowsum<<endl;
    }
    for(int i=0;i<cols;i++){
        int colsum=0;
        for(int j=0;j<rows;j++){
            colsum+=arr[j][i];
        }
        cout<<"col sum of "<<i<<"is"<<colsum<<endl;
    }

    return 0;
}