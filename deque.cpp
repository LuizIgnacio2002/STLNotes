#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> myDeque;

    // Agregar elementos al final del deque usando push_back
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);

    // Agregar elementos al frente del deque usando push_front
    myDeque.push_front(0);
    myDeque.push_front(-1);

    cout << "Deque después de push_back y push_front: ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    // Eliminar el último elemento usando pop_back
    myDeque.pop_back();

    // Eliminar el primer elemento usando pop_front
    myDeque.pop_front();

    cout << "Deque después de pop_back y pop_front: ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
