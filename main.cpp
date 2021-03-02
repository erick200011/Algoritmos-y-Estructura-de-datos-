#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct candidatos
{
	char nombre[100];
	int edad;
	int colav;
	int id1;
	int cont;	
} votos[100];
int main()
{
	char ops;
	int k=0;
	int votos1=0;
	int h=0;
	int id=0;
	int j=0;
	int contador=0,contador1=0;
	do
	{
	cout<<"Bienvenido al registro de votos"<<endl;
	cout<<"a) Ingresar datos de candidatos"<<endl;
	cout<<"b) Votos"<<endl;
	cout<<"c) Resumen de candidatos"<<endl;
	cout<<"d) Salir"<<endl,
	cin>>ops;
	switch (ops)
	{
	case 'a':
	{
	cout<<"Ingrese la cantidad de candidatos a registrar"<<endl; 
	cin>>k;
    for(int i=0;i<k;i++)
    {
    votos[i].id1=id;
    fflush(stdin);
    contador++;
    cout<<"Candidato Numero "<<contador<<endl;
    cout<<"Ingrese su Nombre"<<endl;
	cin.getline(votos[i].nombre,100,'\n');
	fflush(stdin);
	cout<<"Ingrese su Edad"<<endl;
	cin>>votos[i].edad;
	fflush(stdin);
	cout<<"Ingrese el numero de Colavoradores"<<endl;
	cin>>votos[i].colav;
	id++;	
	}//finalizacion del for
	break;	
	}// finalizacion del codigo a
	case 'b':
	{
	for(int i=0;i<k;i++)
	{
	contador1++;
	cout<<"---------Candidato numero "<<contador1<<"---------------"<<endl;
	cout<<"Id "<<votos[i].id1<<endl;
	cout<<"------Resumen de datos-------"<<endl;
	cout<<"Nombre:"<<endl;
	cout<<votos[i].nombre<<endl;
	cout<<"Edad:"<<endl;
	cout<<votos[i].edad<<endl;
	cout<<"Colavoradores:"<<endl;
	cout<<votos[i].colav<<endl;
	}// finalizacion del for
	cout<<"Introdusca el ID por cual quiere votar"<<endl;
	cin>>h;	
	votos[h].cont=votos[h].cont+1;
	
	break;
	}
	case 'c':
	{
    
	for(int i=0;i<k;i++)
	{
	cout<<"Resumen de datos"<<endl;
	cout<<"---------Nombre del cantidato-----------"<<endl;
	cout<<"Id "<<votos[i].id1<<endl;
	cout<<"Nombre:"<<votos[i].nombre<<endl;
	cout<<"Total votos:"<<votos[i].cont<<endl;
	
	}// finalizacion del for
	
	char ganador[100];
	int contGanador=0;
	for(int i=0;i<k;i++)	
	{
		if(votos[i].cont>contGanador)
		{
			strcpy(ganador,votos[i].nombre);
			contGanador=votos[i].cont;
		}
	}
	cout<<"Este candidato gano:"<<ganador<<endl;
		
	}	
	} // finalizancion del switch
	
	}while(ops!='d');
	
	
	getch();
	return 0;
}