#include <iostream>

using namespace std;

int main() {

    int maior = 0, pos = 0, i, x;
    for(i = 1; i <= 100; i++){
        cin >> x;
        if(x > maior){
            maior = x;
            pos = i;
        }
    }
    printf("%d\n%d\n", maior, pos);

    return 0;
}