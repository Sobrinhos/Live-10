#include <iostream>

using namespace std;

int main()
{
    int tamanhoDaMatriz = 3;
    int matrizQuadrada[tamanhoDaMatriz][tamanhoDaMatriz];
    
    int linhaMenorNumeroLido = 0;
    int menorNumeroLido = 0;
    
    for(int linha = 0; linha < tamanhoDaMatriz; linha++){
        for(int coluna = 0; coluna < tamanhoDaMatriz; coluna++){
            cout << "Digite um numero para o campo, linha " << linha+1 << " e coluna " << coluna+1 << " da matriz: ";
            cin >> matrizQuadrada[linha][coluna];
        }
    }
    
    for(int linha = 0; linha < tamanhoDaMatriz; linha++){
        for(int coluna = 0; coluna < tamanhoDaMatriz; coluna++){
            if(matrizQuadrada[linha][coluna] < menorNumeroLido || menorNumeroLido == 0){
                menorNumeroLido = matrizQuadrada[linha][coluna];
                linhaMenorNumeroLido = linha+1;
            }
        }
    }
    
    cout << "\n\nO menor numero digitado foi " << menorNumeroLido << " e ele esta na linha " << linhaMenorNumeroLido << " da matriz. ";

    return 0;
}