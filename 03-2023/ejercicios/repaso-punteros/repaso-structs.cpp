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

void ImprimirLibros(Libro *);
void ImprimirInfoLibro(Libro *, string);
Libro *ObtenerLibro(Libro *, string); // Función para retornar un puntero
void ModificarLibro(Libro *, string);
void ImprimirISBN(Libro *, string);

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
    cout << "Opciones:\n[1] Imprimir todos los libros\n[2] Imprimir información de un libro\n[3] Modificar información de un libro\n[4] Imprimir ISBN de libro\n[0] Salir\n> ";
    cin >> opcion;

    switch (opcion)
    {
    case 0: // Salir
      cout << "Saliendo" << endl;
      break;

    case 1: // Imprimir libros
      ImprimirLibros(libros);

      break;

    case 2: // Imprimir un solo libro
      cout << "Ingrese el título del libro:\n> ";
      cin >> buscarTituloLibro;

      cout << "\n";
      ImprimirInfoLibro(libros, buscarTituloLibro);
      break;

    case 3: // Modificar libro
      cout << "Ingrese el título del libro:\n> ";
      cin >> buscarTituloLibro;

      ModificarLibro(libros, buscarTituloLibro);
      break;

    case 4: // Imprimir ISBN
      cout << "Ingrese el título del libro:\n> ";
      cin >> buscarTituloLibro;

      ImprimirISBN(libros, buscarTituloLibro);
      break;
    }
  } while (opcion != 0);

  return 0;
}

void ImprimirLibros(Libro *libros)
{
  Libro libroActual; // Variable que guarda cada libro dentro del bucle

  for (int i = 0; i < 6; i++)
  {
    libroActual = *(libros + i); // Obtener el VALOR de cada libro en el arreglo
    // Se usó el * para obtener solo la información del libro

    cout << "Libro N°" << i << ":" << endl;
    cout << " - Titulo: " << libroActual.titulo << endl;
    cout << " - Autor: " << libroActual.autor << endl;
    cout << " - Género: " << libroActual.genero << endl;
    cout << " - Páginas: " << libroActual.paginas << endl;
    cout << " - Año de publicación: " << libroActual.year << endl;
    cout << "\n";
  }
}

void ImprimirInfoLibro(Libro *libros, string tituloBuscar)
{
  Libro libroActual;

  for (int i = 0; i < 6; i++)
  {
    libroActual = *(libros + i); // Obtener el VALOR de cada libro en el arreglo

    if (libroActual.titulo == tituloBuscar) // Usar if para imprimir el libro encontrado
    {
      cout << " - Titulo: " << libroActual.titulo << endl;
      cout << " - Autor: " << libroActual.autor << endl;
      cout << " - Género: " << libroActual.genero << endl;
      cout << " - Páginas: " << libroActual.paginas << endl;
      cout << " - Año de publicación: " << libroActual.year << endl;
      cout << "\n";
    }
  }

  // En el caso que no se haya encontrado el libro, terminará el bucle y se saldrá de la función
  // Sin imprimir nada
}

// Función que retorna la dirección de un libro
Libro *ObtenerLibro(Libro *libros, string tituloBuscar)
{
  Libro *libroActual; // PUNTERO para guardar las direcciones de los libros

  for (int i = 0; i < 6; i++)
  {
    libroActual = (libros + i); // Obtener DIRECCIÓN de cada libro en las iteraciones
    // No se usó el * para obtener la DIRECCIÓN en vez del VALOR de cada libro

    if (libroActual->titulo == tituloBuscar)
    {
      return libroActual; // Retornar la DIRECCIÓN del libro encontrado
    }
  }

  return nullptr;
}

void ModificarLibro(Libro *libros, string tituloBuscar)
{
  // La función retorna la dirección del libro. Por lo tanto se guarda en un puntero
  // Este puntero es utilizado para modificar la información del libro dentro de esta función
  Libro *libroSeleccionado = ObtenerLibro(libros, tituloBuscar);

  // != nullptr: Significa que se ha encontrado el libro
  if (libroSeleccionado != nullptr)
  {
    cout << "Nuevo título:\n> ";
    cin >> libroSeleccionado->titulo;

    cout << "Nuevo autor:\n> ";
    cin >> libroSeleccionado->autor;

    cout << "Nuevo género:\n> ";
    cin >> libroSeleccionado->genero;

    cout << "Nueva cantidad de páginas:\n> ";
    cin >> libroSeleccionado->paginas;

    cout << "Nuevo año de publicación:\n> ";
    cin >> libroSeleccionado->year;

    cout << "Libro actualizado correctamente." << endl;
  }
  // Significa que la función retornó un nullptr, no existe.
  else
  {
    cout << "No se ha encontrado el libro" << endl;
  }
}

void ImprimirISBN(Libro *libros, string tituloBuscar)
{
  Libro *libroSeleccionado = ObtenerLibro(libros, tituloBuscar);

  if (libroSeleccionado != nullptr)
  {
    cout << "ISBN del libro " << libroSeleccionado->titulo << ": " << endl;
    cout << libroSeleccionado << endl; // Imprimir dirección del libro
  }
  else
  {
    cout << "No se ha encontrado el libro." << endl;
  }
}