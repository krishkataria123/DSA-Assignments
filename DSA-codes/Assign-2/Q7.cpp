#include <iostream>
using namespace std;
int main(){
    int arr[]={2,10,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]) cnt++;
        }
    }
    cout<<"The number of inversions in given array : "<<cnt;
    return 0;
}
