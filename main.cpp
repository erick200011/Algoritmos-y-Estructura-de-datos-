
#include <iostream>
#include <fstream>
#include <ctime>


using namespace std;

void dividir(int a[], int inicial, int final);
void fusionar(int a[],int pinicial,int pfinal,int medio);






int main()
{
  ofstream archivo;
  archivo.open("mergersort.txt", ios :: app);
    int A[10];
    //COMENZAR CON LA SEMILLA
    srand(time(0));

    for(int i=0; i< 7; i++)
    {
        //LLENAR EL ARREGLO CON VALORES DESDE EL 1 HASTA EL 19
        A[i]=1+rand()%(50-1);
    }

    cout<<endl;

    for(int i=0; i< 7; i++)
    {
        cout<<"|"<<A[i]<<"|";
        archivo<<""<<"["<<A[i]<<"]";

    }

    dividir(A,0,6);

    cout<<endl;
     cout<<endl;

    for(int i=0; i< 7; i++)
    {
        cout<<"|"<<A[i]<<"|";
        archivo<<""<<"["<<A[i]<<"]";

    }


    return 0;
}



void dividir(int a[], int inicial, int final)
{
    int mitad;
    if(inicial < final)
    {
        mitad=(inicial+final)/2;
        dividir(a,inicial,mitad);
        dividir(a,mitad+1,final);
        fusionar(a,inicial,final,mitad);
    }


}



void fusionar(int a[],int pinicial,int pfinal,int medio)
{
    int i,j,k, temp[pfinal-pinicial+1];
    i=pinicial;
    k=0;
    j=medio+1;

    while(i<=medio && j<=pfinal)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while (i<=medio)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while(j<=pfinal)
    {
        temp[k]=a[j];
        k++;
        j++;
    }

    for(i=pinicial; i<=pfinal; i++)
    {
        a[i]= temp[i-pinicial];
    }
}

