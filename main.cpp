#include "pch.h"
#include "conio.h"
#include <iostream>
 
using namespace System;
using namespace std;
 
int* Agregar_Elemento(int* vector_anterior, int* tamanho, int Numero) {
    int* Aux = new int[*tamanho + 1]; // definir arreglo temporal
    for (int i = 0; i < *tamanho; i++) {// copia de los valores anteriores
        Aux[i] = vector_anterior[i];
    }
    if(vector_anterior != NULL)
        delete[] vector_anterior;
    Aux[*tamanho] = Numero;
    *tamanho = *tamanho + 1;
    return Aux;
}
 
//Leer entero
int leerEntero(const int &minimo, const int &maximo) {
    int entero;
    do {
        cout << "Ingrese un entero entre " << minimo << " y " << maximo<<":";
        cin >> entero;
    } while (entero<minimo || entero > maximo);
    return entero;
}
 
int* generarArreglo(const int& tamanho) {
    // crear arreglo en memoria dinamica
    int* arreglo = new int[tamanho];
    Random r;
    for (int i = 0; i < tamanho; i++) {
        arreglo[i] = r.Next(1, 51);
    }
    return arreglo;
}
 
void mostrarArreglo(const int* arreglo, const int &N) {
    for (int i = 0; i < N; i++) {
        cout << "Arreglo [" << i << "] = " << arreglo[i] << endl;
    }
}
 
void ordenarMenorMayor(int* V, int* N) {
    int v;
    for (int i = 0; i < *N - 1; i++)
        for (int j = i + 1; j < *N; j++)
            if (V[i] > V[j]) {
                v = V[i];
                V[i] = V[j];
                V[j] = v;
            }
}
 
 
 
//int* eliminarEnPosicion(int* vector_anterior, int* tamanho, int posicion) {
    int* Eliminar_en_posicion(int* vector_anterior, int* N, int posicion) {
        if (posicion > 0 && posicion < *N) { //validando que mi posicion esta dentro del arreglo
            int* Aux = new int[*N - 1];
            //copiar los elementos que no queremos eliminar
            for (int i = 0; i < *N - 1; i++) {
                if (i < posicion)
                    Aux[i] = vector_anterior[i];
                else
                    Aux[i] = vector_anterior[i + 1];
            }
            //liberar la memoria de vector_anterior
            delete[] vector_anterior;
            *N = *N - 1;
            return Aux;
        }
        else {
            cout << "Posicion incorrecta: Debe estar entre 0 y "<<(*N-1);
            return vector_anterior;
        }
    }
 
    void ordenar_descendente(int* V, int* N) {
        int v;
        for (int i = 0; i < *N - 1; i++)
            for (int j = i + 1; j < *N; j++)
                if (V[i] < V[j]) {
                    v = V[i];
                    V[i] = V[j];
                    V[j] = v;
                }
    }
 
    int* ordenar_descendente_en_otro(int* V, int* N) {
        int* Aux = new int[*N];
        for (int i = 0; i < *N; i++)
            Aux[i] = V[i];
        ordenar_descendente(Aux, N);
        return Aux;
    }
 
void Muestra_Arreglo(int* Vector, int* N) {
    for (int i = 0; i < *N; i++) {
        cout << "Vector[" << i << "] = " << Vector[i] <<endl;
    }
}
 
int main() {
    // leer valor entre 10 y 30
    int N = leerEntero(10, 30);
    // generar arreglo con N valores aleatorios
    int* arreglo = generarArreglo(N);
    //mostrar el arreglo
    mostrarArreglo(arreglo, N);
    // ordenar el arreglo
    ordenarMenorMayor(arreglo, &N);
    cout << "Arreglo Ordenado:" << endl;
    mostrarArreglo(arreglo, N);
    //leer numero entre 2 y 5
    int R = leerEntero(2, 5);
}