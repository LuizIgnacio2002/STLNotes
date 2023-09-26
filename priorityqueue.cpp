#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;

    // Agregar elementos a la cola de prioridad
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    // Acceder al elemento de mayor prioridad (máximo valor)
    cout << q.top() << "\n"; // 7

    // Eliminar el elemento de mayor prioridad
    q.pop();

    // Acceder al nuevo elemento de mayor prioridad
    cout << q.top() << "\n"; // 5

    // Eliminar el elemento de mayor prioridad nuevamente
    q.pop();

    // Agregar un nuevo elemento
    q.push(6);

    // Acceder al nuevo elemento de mayor prioridad
    cout << q.top() << "\n"; // 6

    // Eliminar el último elemento de mayor prioridad
    q.pop();

    return 0;
}
