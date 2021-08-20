#include <iostream>

using namespace std;

int main() {

    int i, j, n, x, primo;

    cin >> n;

    for (i=0; i<n; i++){

        cin >> x;

        for (j=1, primo=0; j<x; j++) {
            if ((x % j) == 0) {
                primo += j;
            }
        }

        if (primo == 1) {
            cout << x << " eh primo" << endl;
        } else {
            cout << x << " nao eh primo" << endl;
        }
    }


    return 0;
}