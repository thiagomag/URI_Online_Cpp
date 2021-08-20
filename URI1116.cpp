#include <iostream>

using namespace std;

int main() {

    int n, i;
    double x, y;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> x >> y;
        if(y != 0){
            printf("%.1f\n", x/y);
        } else {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}