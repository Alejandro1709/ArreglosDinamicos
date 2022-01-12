#include <iostream>

using namespace std;

int *agregar_elemento(int *arr, int*n, int numero) {
  int *aux = new int[*n + 1];
  for (int i = 0; i < *n; i++) {
    aux[i] = arr[i];
  }
  delete[] arr;
  aux[*n] = numero;
  *n = *n + 1;
  return aux;
}

void *mostrar_arreglo(int *arr, int *n) {
  for (int i = 0; i < *n; i++) {
    cout << "Vector[" << i << "] = " << arr[i] << endl;
  }
}

int main() {
  int *n = new int;
  *n = 0;
  int *arr = NULL;
  int elemento;

  while (1) {
    cout << "AGREGAR ELEMENTOS A UN ARREGLO" << endl;
    cout << "-----------------------------" << endl;
    cout << "Ingrese Elemento: ";
    cin >> elemento;
    arr = agregar_elemento(arr, n, elemento);
    cout << "\nElementos del arreglo: " << endl;
    mostrar_arreglo(arr, n);
    cout << "\nPresione una tecla para continuar..." << endl;
    return 0;
  }
  return 0;
} 