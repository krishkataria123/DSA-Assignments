#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,6,7,8};
    int low=0;
    int ans=-1;
    int high=sizeof(arr)/sizeof(arr[0])-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=mid+1){
            ans=mid+1;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;
    return 0;
}