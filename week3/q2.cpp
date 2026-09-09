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
            for (int j = i; j < n - 1; j++)
                a[j] = a[j + 1];

            n--;
            break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
