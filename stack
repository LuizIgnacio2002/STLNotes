#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    // Push: Agregar elementos al tope del stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Verificar si el stack está vacío usando empty
    if (myStack.empty()) {
        cout << "El stack está vacío." << endl;
    } else {
        cout << "El stack no está vacío." << endl;
    }

    // Acceder al elemento en la parte superior del stack usando top
    cout << "Elemento en la parte superior del stack: " << myStack.top() << endl;

    // Pop: Eliminar el elemento en la parte superior del stack
    myStack.pop();

    // Mostrar el stack después de un pop
    cout << "Stack después de un pop: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
