#include <iostream>
using namespace std;

int main() {
    int n, a[100], value;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> value;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == value) {
            cout << "Element found at index: " << mid;
            return 0;
        }
        else if (a[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";

    return 0;
}
