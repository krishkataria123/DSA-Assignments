#include <iostream>
using namespace std;

int insert(int *arr, int pos, int num, int n) {
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    return n + 1;
}
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
bool linear_search(int *arr,int num,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==num) return true;
    }
    return false;
}
int main() {
    int arr[] = {10, 6, 85, 77, 654};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos;
    int num;

    cout << "Enter the posn: ";
    cin >> pos;
    // cout << "Enter the num: ";
    // cin >> num;
    // int n=insert(arr,pos,num,n);



     n = deletion(arr, pos, 5);


    // bool search=linear_search(arr,num,n);
    // cout<<search;


    display(arr,n);

    return 0;
}
