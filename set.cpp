#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> mySet;

    // Insertar elementos en el set usando insert
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Verificar si un elemento está en el set usando count
    int elementToFind = 20;
    if (mySet.count(elementToFind) > 0) {
        cout << elementToFind << " está en el set." << endl;
    } else {
        cout << elementToFind << " no está en el set." << endl;
    }

    // Eliminar un elemento del set usando erase
    int elementToRemove = 10;
    mySet.erase(elementToRemove);

    // Obtener el tamaño del set usando size
    cout << "Tamaño del set después de eliminar un elemento: " << mySet.size() << endl;

    // Buscar un elemento en el set usando find
    int elementToSearch = 30;
    set<int>::iterator it = mySet.find(elementToSearch);
    if (it != mySet.end()) {
        cout << elementToSearch << " encontrado en el set." << endl;
    } else {
        cout << elementToSearch << " no encontrado en el set." << endl;
    }

    // Mostrar todos los elementos del set
    cout << "Elementos del set: ";
    for (const int& elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
