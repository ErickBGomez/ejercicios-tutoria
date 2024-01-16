#include <iostream>

using namespace std;

struct Cancion
{
  string titulo;
  float duracion;
  int reproducciones;
};

struct Album
{
  string titulo;
  string autor;
  Cancion canciones[5];
};

int main()
{
  Album album;

  album.titulo = "Soy Como Quiero Ser";
  album.autor = "Luis Miguel";

  album.canciones[0].titulo = "Es Mejor";
  album.canciones[0].duracion = 4;

  cout << "Titulo album: " << album.titulo << endl;
  cout << "Cancion 1: " << album.canciones[0].titulo << endl;
  cout << "Duracion Cancion 1: " << album.canciones[0].duracion << endl;

  return 0;
}