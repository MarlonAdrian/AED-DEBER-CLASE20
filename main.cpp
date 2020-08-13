#include <iostream>
#include <fstream>

using namespace std;

int main() 
{

ofstream GananciasDeUvas; 
GananciasDeUvas.open("GananciasDeUvas.txt", ios::out);
float  PrecioUva, Total; //al kilo

char x;
cout << "Ingrese el tipo de uva (En Mayus: A/B): ";
cin >> x; 
GananciasDeUvas <<"Tipo de uva: " << x << endl;

switch (x)
 {  
   case ('A'):
    {
     char tamaño;
     float kilos,precio,total;

     cout << "\nDigite el tipo de tamaño (1 o 2): ";
     cin >> tamaño;
     GananciasDeUvas << "Tipo de tamaño: " << tamaño << endl;

     if (tamaño==1)
      {  
       cout << "\nIngrese el numero kilos: ";
       cin >> kilos;
       GananciasDeUvas << "Kilos: "<< kilos << endl;
      
       cout << "\nDigite el precio: $ ";
       cin >> precio;
       GananciasDeUvas << "Precio: $" << precio << endl;
      
       total = (kilos*precio)+0.20;

       cout << "\nTotal venta: $"<< total << "(incluido 20cent al total)" << endl;
       GananciasDeUvas << "\nTotal venta: $"<< total << "(incluido 20cent al total)"<< endl; 
  
      }


       else
      {
       cout << "\nIngrese el numero kilos: ";
       cin >> kilos;
       GananciasDeUvas << "Kilos: "<< kilos << endl;

       cout << "\nDigite el precio: $ ";
       cin >> precio;
       GananciasDeUvas << "Precio: $" << precio << endl;
      
       total = (kilos*precio)+0.20;

       cout << "\nTotal venta : $"<< total <<  "(incluido 30cent al total)"<< endl;
        GananciasDeUvas << "\nTotal venta: $"<< total << "(incluido 30cent al total)"<< endl; 

       }
      }

    break;
   case 'B':
    {
     char tamaño;
     float kilos,precio,total;

     cout << "\nDigite el tipo de tamaño (1 o 2): ";
     cin >> tamaño;
     GananciasDeUvas << "Tipo de tamaño: " << tamaño << endl;

     if( tamaño ==1)
      {cout << "\nIngrese el numero de kilos: ";
      cin >> kilos;
      GananciasDeUvas << "Kilos: "<< kilos << endl;
      
      cout << "\nDigite el precio: $ ";
      cin >> precio;
      GananciasDeUvas << "Precio: $" << precio << endl;
      
      total = (kilos*precio)-0.30;

      cout << "\nTotal venta: $"<<  total << "(incluido la rebaja de 30cent al total)";
      GananciasDeUvas << "\nTotal venta: $"<< total << "(incluido la rebaja de 30cent al total)"<< endl;    

      }    

     else 
      {
       cout << "\nIngrese el numero de kilos: ";
       cin >> kilos;
       GananciasDeUvas << "Kilos: "<< kilos << endl;
      
       cout << "\nDigite el precio: $";
       cin >> precio;
       GananciasDeUvas << "Precio: $" << precio << endl;
      
       total = (kilos*precio) - 0.50;

       cout << "\nTotal venta: $"<< total << "(incluido la rebaja de 50cent al total) ";
       GananciasDeUvas << "\nTotal venta: $"<< total << "(incluido la rebaja de 50cent al total)"<< endl; 

      }
    }
  }
GananciasDeUvas.close();  
}
