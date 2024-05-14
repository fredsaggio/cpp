#include <iostream>

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(double a, double b){
    if (b == 0) {
        std::cerr << "Errou ai, nenhum numero e divisivel por 0. \n";
        return 0;
    }
    return a / b;
}

int main() {
    int a, b;
    std::cout << "Digite dois numeros: ";
    std::cin >> a >> b;


    std::cout << "Adicao: " << somar(a, b) << std::endl;
    std::cout << "Subtracao: " << subtrair(a, b) << std::endl;
    std::cout << "Multiplicacao: " << multiplicar(a, b) << std::endl;
    std::cout << "Divisao: " << dividir(a, b) << std::endl;

    return 0;
}