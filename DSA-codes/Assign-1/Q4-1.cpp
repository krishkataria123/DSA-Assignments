#include<iostream>
using namespace std;
void reverse(int *arr,int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void display(int *arr,int n){
    cout << "Final Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={1,2,3,4,6,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    display(arr,n);
    return 0;
}