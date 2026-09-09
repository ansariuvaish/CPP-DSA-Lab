#include <iostream>
using namespace std;

int main() {
    int n, a[100], value;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> value;

    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            cout << "Element found at index: " << i;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}
