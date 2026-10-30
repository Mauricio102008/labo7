#include <iostream>
using namespace std;
int main() {
    int N;
    int suma = 0;
    int contador = 1;
    cout << "Ingresa un numero y yo te dire la suma de todos los numeros desde 1 hasta ese numero: ";
    cin >> N;

    while (contador <= N) {
        suma += contador; 
        contador++;       
    }
    cout << "La suma de todos los numeros desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}