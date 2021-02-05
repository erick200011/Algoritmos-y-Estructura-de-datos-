#include <iostream>
using namespace std;
int main() {
 char s[20];
 int puntos,distancia,conectores;
 int i=0,sumadistancia=0;
 float
sumatotal,costo,cables=0,preciomaterial,preciomaterial1,cableconect,ganancia,total;
 cout<< "Bienvenido a Electrocables"<<endl;
 cout <<"Ubicacion del servicio"<<endl;
 cin.getline(s,40);
 cout<<"Ingrese el numero de puntos de red que va a ser instalada"<<endl;
 cin>>puntos;
 for (i=1;i<=puntos;i=i+1){
 cout <<"Punto de red " " "<<i<<endl;
 cout<<"Ingrese la distancia entre el conector de punto de red hasta el equipode conectividad"<<endl;
 cin>>distancia;
 cout<<"Ingrese el numero de conectores para el punto de red"<<endl;
 cin>>conectores;
 sumadistancia=sumadistancia+(distancia*conectores);
 sumatotal=sumadistancia+(sumadistancia*0.05);
 costo=sumadistancia*0.90;
 cables=cables+conectores;
 preciomaterial=(2*(cables*0.35+ cables *0.15) );
 preciomaterial1=preciomaterial+(preciomaterial*0.15);

 }
 cableconect=costo+preciomaterial1;
 ganancia=cableconect*0.45;
 total=cableconect+ganancia;
 cout <<"\t\tEl detalle de la instalacion es el siguiente: ";
 cout<<"\nLa distancia de los conectores total utilizado en la instalacion es :" " "<<sumatotal<<endl;

 cout<<"El costo de cable de categoria 5e: " ""<<costo<<endl;
 cout<<"EL costo de los conectores RJ45 (Macho y hembra) es: " ""<<preciomaterial1<<endl;

 cout<<"El total de material utilizado : " " "<<cableconect<<endl;
 cout<<"La ganancia es : " " "<<ganancia<<endl;
 cout<< "El total a pagar es : " " "<<total<<endl;

}



