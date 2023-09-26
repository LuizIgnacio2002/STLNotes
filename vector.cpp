#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    // Agregar elementos al final del vector usando push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Acceder al primer elemento (v[0])
    cout << "Primer elemento: " << v[0] << endl;

    // Acceder al último elemento usando back()
    cout << "Ultimo elemento: " << v.back() << endl;

    // Eliminar el último elemento usando pop_back()
    v.pop_back();

    // Mostrar el vector después de eliminar el último elemento
    cout << "Despues de pop_back(): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
