#include <iostream>
using namespace std;

int main() {
    int digit;
    cin >> digit;

    if (digit % 2 == 0)
        cout << "You will vote at Booth A.";
    else
        cout << "You will vote at Booth B.";

    return 0;
}
