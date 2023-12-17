#include <iostream>
#include <fstream>

using namespace std;

void Escribir(string, string, string);
void Leer();
void Separar(string);

int main()
{
  string usernameInput;
  string emailInput;
  string passwordInput;

  cout << "Ingrese nombre de usuario:\n> ";
  cin >> usernameInput;

  cout << "Ingrese correo electrónico:\n> ";
  cin >> emailInput;

  cout << "Ingrese contraseña:\n> ";
  cin >> passwordInput;

  Escribir(usernameInput, emailInput, passwordInput);

  // Leer();

  return 0;
}

void Escribir(string username, string email, string password)
{
  string nombreArchivo = "users.txt";
  ofstream archivo;

  archivo.open(nombreArchivo, ofstream::app);

  if (archivo.is_open())
  {
    // Cuando el archivo se abrió / creó
    archivo << username << "," << email << "," << password << endl;

    cout << "Usuario creado correctamente" << endl;
  }
  else
  {
    // Error al abrirse o crearse
    cout << "Error: No se pudo abrir el archivo" << endl;
  }

  archivo.close();
}

void Leer()
{
  string nombreArchivo = "users.txt";
  ifstream archivo;
  string linea;

  string delimeter = ",";

  archivo.open(nombreArchivo);

  if (archivo.is_open())
  {
    while (getline(archivo, linea))
    {
      Separar(linea);
    }
  }
  else
  {
    cout << "No se encontró" << endl;
  }

  archivo.close();
}

void Separar(string input)
{
  string delimiter = ",";
  int pos = 0;
  string token;
  while ((pos = input.find(delimiter)) != string::npos)
  {
    token = input.substr(0, pos);
    cout << token << endl;
    input.erase(0, pos + delimiter.length());
  }
  cout << input << endl;
}