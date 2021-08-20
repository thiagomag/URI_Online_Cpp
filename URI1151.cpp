#include <iostream>

using namespace std;

int main() {

    int i, n, n1, n2, n3;
    cin >> n;

    n1 = 0;
    n2 = 1;

    cout << n1 << " " << n2;

    for (i=2; i<n; i++) {
        n3 = n1 + n2;
        cout << " " << n3;
        n1 = n2;
        n2 = n3;
    }
    cout << endl;

    return 0;
}