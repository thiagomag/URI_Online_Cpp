#include <iostream>

using namespace std;

int main() {

    double soma = 0;
    int valoresPos = 0;
    for (int i = 0; i < 6; i++) {
        double n;
        cin >> n;
        if (n > 0) {
            soma += n;
            valoresPos++;
        }
    }
    double media = soma / valoresPos;
    printf("%d valores positivos\n%.1f\n", valoresPos, media);

    return 0;
}