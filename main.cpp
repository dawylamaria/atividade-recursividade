#include <iostream>

using namespace std;

int multiplica_com_soma(int vezes, int valor) {
    if (vezes == 0 || valor == 0) {
        return 0;
    } else if (vezes == 1) {
        return valor;
    } else {
        return valor + multiplica_com_soma(vezes - 1, valor);
    }
}

int fibonacci(int num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int soma_vetor(int v[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    } else {
        return v[tamanho - 1] + soma_vetor(v, tamanho - 1);
    }
}

void invertendo_posicoes(int v[], int inicio, int fim) {
    int aux;
    if (inicio < fim) {
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;

        invertendo_posicoes(v, inicio + 1, fim - 1);
    }
}

void imprimir(int v[], int tamanho) {
    if (tamanho == 1) {
        cout << v[tamanho - 1];
    } else {
        imprimir(v, tamanho - 1);
        cout << ", " << v[tamanho - 1];
    }
}

int main(int argc, char** argv) {
    int escolha;

    int vet[10] = {1,2,3,4,5,6,7,8,9,10}; 

    cout << "Digite a questao (1 a 4):" << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            int multiplicacao;
            multiplicacao = multiplica_com_soma(3, 2);
            cout << "resultado: " << multiplicacao << endl;
            break;

        case 2:
            int n;

            cout << "Digite o numero de valores a serem gerados pela sequencia de fibonacci:" << endl;
            cin >> n;

            for (int i = 0; i < n; i++) {
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            break;
		
        case 3: 
        {
        	int soma = soma_vetor(vet, 10);
            cout << "Soma: " << soma << endl;
            break;
		}
		
        case 4:
        	
        	cout << "Vetor antes de inversao:" << endl;
            imprimir(vet, 10);
            
            cout << endl;
            
            cout << "\nVetor com as posicoes invertidas:" ; 
            invertendo_posicoes(vet, 0, 9);
            
            cout << endl;
            
            imprimir(vet, 10);
            cout << endl;
            break;
        
    }
    system("pause");
    return 0;
}
