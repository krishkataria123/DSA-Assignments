#include<iostream>
using namespace std;

void display(int *arr,int n){
    cout << "Final Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={1,2,5,3,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        bool check=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check=true;
            }
        }
        if(check==false) break;
    }
    display(arr,n);
    return 0;
}