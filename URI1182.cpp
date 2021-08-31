#include <iostream>

using namespace std;

int main() {

    double mat[12][12], x, soma = 0, media;
    int i, j, n;
    char oper;

    cin >> n;
    cin >> oper;

    for(i=0; i < 12; i++){
        for(j=0; j < 12; j++){
            cin >> mat[i][j];
        }
    }
    if(oper == 'S'){
        for(i=0; i < 12; i++){
            soma += mat[i][n];
        }
        printf("%.1lf\n", soma);
    } else if(oper == 'M'){
        for(i=0; i < 12; i++){
            soma += mat[i][n];
        }
        media = soma/12.0;
        printf("%.1lf\n", media);
    }

    return 0;
}