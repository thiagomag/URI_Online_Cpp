#include <iostream>

using namespace std;

int main() {

    int n, x, i, menor, pos;

    cin >> n;

    int vet[n];

    for(i=0; i < n; i++){
        cin >> x;
        vet[i] = x;
    }

    menor = vet[0];

    for(i=0; i < n; i++){
        if(menor > vet[i]){
            menor = vet[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
}