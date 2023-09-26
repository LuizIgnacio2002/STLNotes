#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;

    // Push: Agregar elementos al final de la cola
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Verificar si la cola está vacía usando empty
    if (myQueue.empty()) {
        cout << "La cola está vacía." << endl;
    } else {
        cout << "La cola no está vacía." << endl;
    }

    // Acceder al elemento en el frente de la cola usando front
    cout << "Elemento en el frente de la cola: " << myQueue.front() << endl;

    // Acceder al elemento en el final de la cola usando back
    cout << "Elemento en el final de la cola: " << myQueue.back() << endl;

    // Pop: Eliminar el elemento en el frente de la cola
    myQueue.pop();

    // Mostrar la cola después de un pop
    cout << "Cola despues de un pop: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
