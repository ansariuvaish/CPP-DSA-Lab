#include <iostream>
using namespace std;

int main() {
    int n, a[100], value, pos;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> value;
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!";
    }
    else {
        for (int i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos] = value;
        n++;

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }

    return 0;
}
