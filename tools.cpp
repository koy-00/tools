#include <iostream>
using namespace std;

int main() {
   cout << "========== NYX TOOLS ==========" << endl;

   cout << "[1] conversor termico" << endl;
   cout <<  "[2] Calculadora" << endl;
 
   int opcion;
   cout << "elije una opcion: ";
   cin >> opcion;
   
   switch (opcion){

    case 1:
        cout << "(por zaitziev,v.01)" << endl;
    cout << "bienvenido a la conversion de unidades termicas!" << endl;
    double cantidad;
    cout << "cual es la temperatura?";
    cin >> cantidad;

    cout << "[1]: celsius a fahrenheit " << endl;
    cout << "[2]: celsius a kelvin" << endl;
    cout << "[3]: Fahrenheit a Celsius" << endl;
    cout << "[4]: Fahrenheit a Kelvin" << endl;
    cout << "[5]: Kelvin a Fahrenheit" << endl;
    cout << "[6]: Kelvin a Celsius" << endl;
    
    int unidad;
    cout << "cual es la unidad que deseea convertir? (1-6): ";
    cin >> unidad;
    switch (unidad){
        case 1:
        double resultado1;
        resultado1 = (cantidad * 9 / 5) + 32;
        cout << "resultado: " << resultado1 << "°F";
        break;  

        case 2:
        double resultado2;
        resultado2 = cantidad + 273.15;
        cout << "resultado: " << resultado2 << "°K";
        break;

        case 3:
        double resultado3;
        resultado3 = (cantidad - 32) * 5 / 9;
        cout << "resultado: " << resultado3 << "°C";
        break;

        case 4:
        double resultado4;
        resultado4 = (cantidad - 32) * 5 / 9 + 273.15;
        cout << "resultado: " << resultado4 << "°K";
        break;

        case 5:
        double resultado5;
        resultado5 = (cantidad - 273.15) * 9 / 5 + 32;
        cout << "resultado: " << resultado5 << "°F";
        break;

        case 6:
        double resultado6;
        resultado6 = cantidad - 273.15;
        cout << "resultado: " << resultado6 << "°C";
        break;
    }
 
    case 2:
        int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int n2;
    cout << "elije otro numero : ";
    cin >> n2;
   int opcion;
   
  cout << "========================" << endl;
  cout << "    CALCULADORA         " << endl;
  cout << "========================" << endl;

  cout << " [1] Sumar" << endl;
  cout << "[2] Restar" << endl;
  cout << "[3] Multiplicar" << endl;
  cout << "[4] Dividir" << endl;
  cout << "[0] Salir" << endl;  
   
  cout << "elije una opcion de la lista (0-4): ";
  cin  >> opcion;
  switch (opcion) {
    case 1:
     cout << numero + n2;
    break;
    case 2:
     cout << numero - n2; 
    break;
    case 3:
     cout << numero * n2; 
    break;
    case 4: 
    cout << numero / n2; 
    break;
      case 0: 
    cout << "gracias por usar :)"; 
    break;
    default:
    cout << "opcion invalida";
    break;
  }
}
    return 0;
}
