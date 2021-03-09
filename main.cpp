#include <iostream>
#include <fstream>
#include <stdlib.h> 
using namespace std;



void quickSort(int *A, int izq, int der) {  
 int piv = A[izq];
 int i = izq;
 int j = der;
 int aux;

 while (i < j) {
    while (A[i] <= piv && i < j) i++;
      while (A[j] > piv) j--;
        if (i < j) {
          aux  = A[i];
          A[i] = A[j];
          A[j] = aux;
          }
 }

 A[izq] = A[j];
 A[j] = piv;
 if (izq<j - 1)
  quickSort(A, izq, j - 1);
 if (j + 1 <der)
  quickSort(A, j + 1, der);

}

int main() {
  ofstream archivo;
  archivo.open("\nOrdenamiento QuickSort\n",ios::app);
 int A[10];
 cout << " El array de valores es: " << endl;
 for (int i = 0; i < 10; i++) {
  A[i] = rand();
  cout << A[i] << " ";
 }
 cout << endl << " Y el array de valores ordenados es: " << endl;
 quickSort(A, 0, 9);

 for (int i = 0; i < 10; i++) {
  cout << A[i] << " ";
  archivo <<A[i]<<" ";
 }
 system("pause > nul");
 archivo.close();
 return 0;
}
