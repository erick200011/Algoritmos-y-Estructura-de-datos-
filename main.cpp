#include <iostream>
using namespace std;
#include <fstream>
void carrera(string nombrearchivo);
void mostrar(string nombrearchivo);
void Menu();
int main() 
{
  string nombrearchivo;
  char Tipo;
  int con=1;
  while(con!=0)
  {
    Menu();
    cout<<" \n\nIngrese una opcion: ";
    cin>>Tipo;
    switch (Tipo) 
	  {
      case 'a':
      cin.ignore();
        cout<<"Ingrese el nombre del archivo:\n";
        getline(cin, nombrearchivo);
        carrera(nombrearchivo);
        con=1;
       break;          
	    case 'b':
         mostrar(nombrearchivo);
         con=1;
       break;          
	    case 'c':       
       con=0;
       cout<<"\n-------MUCHAS GRACIAS ------\n";
       break;
	    default:cout<<"\nERROR, Al introducir la opcion\n";
       con=1;
       break;
     }
    
  }
  return 0;
}
void carrera(string nombrearchivo)
{
  string nombre;
  string apellido;
  string carrera;
  string edad;
  char r;
  ofstream archivoprueba;
  archivoprueba.open(nombrearchivo,ios::out);
  do
  {
    cout<<"Ingrese el nombre:\n";
    getline(cin,nombre);
    cout<<"Ingrese el apellido:\n";
    getline(cin,apellido);
    cout<<"Ingrese la edad:\n";
    cin>>edad;
    cout<<"Ingrese su carrera:\n";
    cin >>carrera;
    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<" "<<carrera<<endl;
    cout<<"Desea ingresar otro contacto s/n:\n";
    cin>>r;
    cin.ignore();
  }
  while (r=='s');
  archivoprueba.close();
}

void mostrar (string nombrearchivo)
{
  string nombre;
  string apellido;
  string edad;
  string carrera;
  char r;
  ofstream archivoprueba;
  
   ifstream archivolectura;
   string texto;
   archivolectura.open(nombrearchivo,ios::in);
   if (archivolectura.fail())
   {
     cout<<"NO SE ENCONTRÓ NINGÚN ARCHIVO!\n";
   }
   else
   {
      while (!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>edad>>carrera;
      if(!archivolectura.eof())
      {
          cout<<"Nombre: "<<nombre<<endl;

          cout<<"Apellido: "<<apellido<<endl;

          cout<<"Edad: "<<edad<<endl;

          cout<<"Carrera: "<<carrera<<endl;
      } 
    }
   }
    archivolectura.close();
}
void Menu(void)
{
  cout<<"\t\t╔══════════════════════════════════════════╗\n";
  cout<<"\t\t║                █ MENÚ █                  ║\n";
	cout<<"\t\t║  a) INGRESAR DATOS                       ║\n";
	cout<<"\t\t║  b) MOSTRAR DATOS                        ║\n";
	cout<<"\t\t║  c) Salir                                ║\n";
  cout<<"\t\t╚══════════════════════════════════════════╝\n";
}