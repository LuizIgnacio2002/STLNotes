#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Crear un bitset de 8 bits inicializado con el valor 42 (101010 en binario)
    bitset<8> myBitset(42);
    bitset<10> s(string("0010011010"));

    // Acceder a bits individuales
    cout << "Bit 0: " << myBitset[0] << endl; // Imprimir el bit 0 (el bit menos significativo)
    cout << "Bit 1: " << myBitset[1] << endl;

    // Establecer un bit específico en 1
    myBitset[2] = 1;

    // Establecer un bit específico en 0
    myBitset[3] = 0;

    // Imprimir el valor completo del bitset en binario
    cout << "Bitset completo: " << myBitset << endl;
    cout << "s: " << s << endl;

    return 0;
}
