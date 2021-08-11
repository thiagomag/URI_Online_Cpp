#include <iostream>
using namespace std;

int main() {

    double r;
    double PI = 3.14159;

    cin >> r;

    double area = PI * r * r;

    printf("A=%.4lf\n", area);

    return 0;
}