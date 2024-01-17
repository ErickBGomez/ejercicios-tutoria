#include <iostream>

using namespace std;

struct Libro
{
  string titulo;
  string autor;
  string genero;
  int paginas;
  int year;
};

Libro &ObtenerLibro(Libro *, string);
void ImprimirLibroInfo(Libro *, string); // Dirección
void ImprimirLibros(Libro *);
void ModificarLibro(Libro *, string);
void ImprimirDireccionLibro(Libro &); // Referencia

int main()
{
  int opcion;
  string buscarTituloLibro;

  Libro libros[6] = {
      {"Cien años de soledad", "Gabriel García Márquez", "Romance", 200, 1880},
      {"Drácula", "Bram Stoker", "Terror", 400, 1700},
      {"Viaje al centro de la Tierra", "Julio Verne", "Ciencia ficción", 500, 2000},
      {"El amor en tiempos de guerra", "Gabriel García Márquez", "Romance", 600, 1980},
      {"El Principito", "Antoine de Saint-Exupéry", "Fantasía", 150, 1970},
      {"Don Quijote de la Mancha", "Miguel de Cervantes", "Caballerezco", 800, 1950},
  };

  do
  {
    cout << "Opciones:\n[1] Imprimir informacion del libro\n[2] Imprimir todos los libros\n[3] Modificar información de un libro\n[4] Imprimir dirección de libro\n[0]Salir\n> ";
    cin >> opcion;

    switch (opcion)
    {
    case 0:
      cout << "Saliendo" << endl;
      break;

    case 1:
      cout << "Ingrese titulo del libro\n> ";
      cin >> buscarTituloLibro;

      ImprimirLibroInfo(libros, buscarTituloLibro);
      break;
    }
  } while (opcion != 0);

  return 0;
}

Libro &ObtenerLibro(Libro *libros, string buscarTituloLibro)
{
  for (int i = 0; i < 5; i++)
  {
    Libro *libroActual = (libros + i);

    // if ()
  }
}

void ImprimirLibroInfo(Libro *libros, string buscarTituloLibro)
{
}