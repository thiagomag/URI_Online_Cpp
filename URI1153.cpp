#include <iostream>

using namespace std;

int main() {

    int i, n;
    cin >> n;
    for (i=n; i>2; i--) {
        n *= (i - 1);
    }
    cout << n << endl;

    return 0;
}