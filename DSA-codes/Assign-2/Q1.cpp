#include <iostream>
using namespace std;

void binaryS(int arr[], int l, int r, int val, int &ans) {
    if(l>r) return;
    int mid = l + (r - l) / 2;
    int mid_val = arr[mid];
    if (mid_val == val) {
        ans = mid + 1;
        return;
    }
    else if (mid_val < val)
        binaryS(arr, mid + 1, r, val, ans);
    else if (mid_val > val)
        binaryS(arr, l, mid - 1, val, ans);
}

int main() {
    int arr[] = {2, 4, 7, 8, 9};
    int value;
    cin >> value;

    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;
    int ans = -1;

    binaryS(arr, s, e, value, ans);
    cout << "Position of required value : " << ans;

    return 0;
}
