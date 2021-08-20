#include <iostream>

using namespace std;

int main() {

    int i, n, resultado;
    cin >> n;
    for (i=1; i<=10; i++) {
        resultado = n * i;
        cout << i << " x " << n << " = " << resultado << endl;
    }

    return 0;
}