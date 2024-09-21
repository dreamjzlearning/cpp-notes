#include <iostream>
#include <string>
#include <vector>

using namespace std;

int binarySearch(const vector<int>&, int);
int binarySearchWithIterator(const vector<int>&, int);

int main() {
    vector<int> arr = { 1, 5, 6, 88, 90 };
    int ret = binarySearch(arr, 6);
    cout << "Found in: " << ret << endl;
    int ret2 = binarySearchWithIterator(arr, 6);
    cout << "Found in: " << ret2 << endl;

    return 0;
}

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) >> 1; // 相较于 (right+left ) >> 1 可防止溢出
        int midVal = arr[mid];

        if (target == midVal) {
            return mid;
        }
        else if (target < midVal) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
}

int binarySearchWithIterator(const vector<int>& arr, int target) {
    auto left = arr.begin();
    auto right = arr.end();

    while (left <= right) {
        auto mid = left + (right - left) / 2;
        if (target == *mid) {
            return mid - arr.begin();
        }
        else if (target < *mid) {
            right = mid + 1;
        }
        else {
            left = mid - 1;
        }
    }

    return -1;
}
