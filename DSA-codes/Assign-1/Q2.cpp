#include<bits/stdc++.h>
using namespace std;
int deletion(int *arr, int pos, int n) {
    for (int i = pos; i<n; i++) {
        arr[i-1] = arr[i];
    }
    return n -1;
}
void display(int *arr,int n){
    cout << "Final Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={1,2,3,5,5,6,9,5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=size;
    sort(arr,arr+size);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            n=deletion(arr,i+2,n);
            i--;
        }
    }
    display(arr,n);
    return 0;
}