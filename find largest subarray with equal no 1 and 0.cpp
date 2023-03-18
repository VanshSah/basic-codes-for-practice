#include <iostream>
#include <unordered_map>

using namespace std;

int findMaxLength(int* arr, int n) {
    unordered_map<int, int> m;
    int count = 0;
    int max_length = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count--;
        } else {
            count++;
        }

        if (count == 0) {
            max_length = max(max_length, i + 1);
        }

        if (m.find(count) != m.end()) {
            max_length = max(max_length, i - m[count]);
        } else {
            m[count] = i;
        }
    }

    return max_length;
}

int main() {
    int arr[] = {0, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMaxLength(arr, n) << endl;
    return 0;
}
