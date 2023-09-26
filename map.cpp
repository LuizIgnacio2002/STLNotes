#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;

    // Insertar elementos en el mapa
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    // Acceder al valor asociado a una clave
    cout << "Valor asociado a 'banana': " << m["banana"] << "\n"; // 3

    // Acceder a una clave que no existe
    cout << "Valor asociado a 'aybabtu': " << m["aybabtu"] << "\n"; // 0 (valor predeterminado para claves inexistentes)

    // Verificar si una clave existe en el mapa usando count
    if (m.count("aybabtu")) {
        cout << "'aybabtu' existe en el mapa." << endl;
    } else {
        cout << "'aybabtu' no existe en el mapa." << endl;
    }

    // Iterar a través de todas las parejas clave-valor en el mapa
    cout << "Elementos en el mapa:" << endl;
    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}
