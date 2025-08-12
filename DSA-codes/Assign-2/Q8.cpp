#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,2,55,2,525,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        if(i==size-1||arr[i]!=arr[i+1]) cnt++;
        else continue;
    }
    cout<<"The number of distint elements in given array : "<<cnt;
    return 0;
}