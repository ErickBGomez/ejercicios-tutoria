#include <iostream>
#include <fstream>

using namespace std;

void Write();
void Read();

int main()
{
  Write();
  Read();

  return 0;
}

void Write()
{
  // Declarar nombre y extensión del archivo
  string fileName = "file.txt";
  // Declarar archivo de escritura
  ofstream file;

  // Abrir archivo en la ruta actual (si no existe, crear uno nuevo)
  // Usar fstrea::app para añadir elementos al final del archivo tras su escritura
  file.open(fileName, fstream::app);

  // Verificar que el archivo haya sido abierto
  if (file.is_open())
  {
    // Escribir texto con "<<"
    // Para saltar una nueva línea, usar endl
    file << "Something" << endl;
  }
  else
    cout << "Couldn't open the file" << endl;

  // Cerrar archivo
  file.close();
}

void Read()
{
  // Variable para guardar cada línea del archivo
  string line;
  // Declarar nombre y extensión del archivo
  string fileName = "file.txt";
  // Declarar archivo de lectura
  ifstream file;

  // Abrir el archivo
  file.open(fileName);

  // Verificar si se ha abierto correctamente
  if (file.is_open())
  {
    // Obtener cada línea del archivo
    while (getline(file, line))
    {
      cout << line << endl;
    }
  }
  else
    cout << "Couldn't open the file" << endl;

  // Cerrar archivo
  file.close();
}