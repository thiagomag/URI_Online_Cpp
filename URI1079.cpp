#include <iostream>

using namespace std;

int main() {

    int n;
    double x, y, z;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;

        double media = ((x*2) + (y*3) + (z*5)) / 10;

        printf("%.1f\n", media);
    }

    return 0;
}