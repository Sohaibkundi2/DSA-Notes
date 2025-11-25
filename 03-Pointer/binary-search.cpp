#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 7;

    int n = arr.size();

    int st = 0;
    int end = n-1;

    int mid = st + (end - st)/2;

    while(st <= end){
        if(arr[mid] == target){
            cout << "Found at index: " << mid;
            return 0;
        }

        if(target > arr[mid]){
            st = mid + 1;
            mid = st + (end - st)/2;
        } else{
            end = mid - 1;
            mid = st + (end - st)/2;
        }
    }
    cout << "Not Found";
    return 0;
}