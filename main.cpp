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
  int *op;

  while (1) {
   cout << "MENU" << endl;
   cout << "1. Listar Elementos" << endl;
   cout << "2. Agregar al final" << endl;
   cout << "3. Eliminar en posicion" << endl;
   cout << "4. Agregar al inicio" << endl;
   cout << "5. Modificar en posicion" << endl;
   cout << "6. Insertar en posicion" << endl;
   cout << "7. Ordenar de mayor a menor" << endl;
   cout << "8. Salir" << endl;
   cin >> *op;

   if (*op == 8) break;
  }

  return 0;
} 