#include <iostream>
#include <fstream>
using namespace std;

void algoritmoInserccion(int a[], int n);

void algoritmoInterpolacion (int a[], int n);

void impirmirElementos(int a[], int n);

int x;

int main()
{
    ofstream archivo;
    archivo.open("Ordenamiento.txt", ios::app);

    int A[7]= {1,5,8,9,2,3,7};
    impirmirElementos (A,7);
    archivo<<"\n";
    algoritmoInserccion(A,7);
    archivo<<"\n";
    impirmirElementos (A,7);
    archivo<<"\n";
    algoritmoInterpolacion(A,7);
}


void impirmirElementos(int a[], int n)
{
    ofstream archivo;
    archivo.open("Ordenamiento.txt", ios::app);
    for(int i=0; i<n; i++)
    {
        archivo<<"|"<<a[i]<<"|";
        
    }
}


void algoritmoInserccion(int a[], int n)
{
    int pos,aux;
    for(int i=0; i<n; i++)
    {
        pos=i;

        aux=a[i];

        while((pos>0)&&(a[pos-1]>aux))
        {
            a[pos] = a[pos-1];

            pos--;

        }

        a[pos]=aux;
    }


}


void algoritmoInterpolacion (int a[], int n)
{
    ofstream archivo;
    archivo.open("Interpolacion.txt", ios::app);
    
    cout<<"\nIngresar el numero a buscar: ";
    cin>>x;

    int primero = 0;

    int ultimo = n-1;

    int medio;

    int cont=0;

    int num=x;

    

    while(a[primero] != num && cont<=7 )
    {
        medio = primero + ((num - a[primero])*(ultimo-primero))/(a[ultimo]-a[primero]);
        if(a[medio]<num)
        {
            primero = medio +1;
        }
        else if(a[medio]>num)
        {
            ultimo = medio-1;
        }
        else
        {
            primero = medio;
        }
        cont++;
    }
    if(a[primero]==num)
    {
        archivo<<"\nELEMENTO "<<x<<" ENCONTRADO";
    }
    else
    {
        archivo<<"\nELEMENTO "<<x<<" NO ENCONTRADO";
    }
}