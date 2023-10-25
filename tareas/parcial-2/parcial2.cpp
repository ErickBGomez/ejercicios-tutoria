#include <iostream>
#include <cmath>

using namespace std;

float Fi(float, float);
float SBR(float, float, int, int, float, float, int);
float FactorIncremento(int, int);
float ief(float);

int main()
{
  int opcion;
  float pmens;

  float IPCr, IPCi, IBCc, IBCd, CIAP, i;
  int t, w, n, ac, mp;

  do
  {
    cout << "Ingrese una opcion: \n1. Pension para los optados \n2. pension para los afiliados del sistema publico de pensiones \n3. pension para los afiliados al sistema privado\n4. Salir \n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      cout << "Pension para los optados: " << endl;

      cout << "Ingrese: IPC del mes de referencia (IPCr): ";
      cin >> IPCr;

      cout << "Ingrese: IPC del mes actual (IPCi): ";
      cin >> IPCi;

      cout << "Ingrese: N+umero de meses considerador para el cálculo (t): ";
      cin >> t;

      cout << "Ingrese: Número de meses posteriores al mes de dicimebre del año 2000 (w): ";
      cin >> w;

      cout << "Ingrese: Base de Cotización del mes en colones (IBCc): ";
      cin >> IBCc;

      cout << "Ingrese: Base de Cotización del mes en dólares (IBCd): ";
      cin >> IBCd;

      cout << "Ingrese: Valor determinado de IBC (n): ";
      cin >> n;

      cout << "Ingrese: Años cotizados (ac): ";
      cin >> ac;

      pmens = 0.35 * SBR(IPCr, IPCi, t, w, IBCc, IBCd, n) * FactorIncremento(ac, opcion);

      cout << "Resultado de pensión para los optados: $" << pmens << endl;

      break;
    case 2:
      cout << "pension para los afiliados del sistema publico de pensiones" << endl;

      cout << "Ingrese: IPC del mes de referencia (IPCr): ";
      cin >> IPCr;

      cout << "Ingrese: IPC del mes actual (IPCi): ";
      cin >> IPCi;

      cout << "Ingrese: N+umero de meses considerador para el cálculo (t): ";
      cin >> t;

      cout << "Ingrese: Número de meses posteriores al mes de dicimebre del año 2000 (w): ";
      cin >> w;

      cout << "Ingrese: Base de Cotización del mes en colones (IBCc): ";
      cin >> IBCc;

      cout << "Ingrese: Base de Cotización del mes en dólares (IBCd): ";
      cin >> IBCd;

      cout << "Ingrese: Valor determinado de IBC (n): ";
      cin >> n;

      cout << "Ingrese: Años cotizados (ac): ";
      cin >> ac;

      pmens = 0.30 * SBR(IPCr, IPCi, t, w, IBCc, IBCd, n) * FactorIncremento(ac, opcion);

      cout << "Resultado de pensión para los optados: $" << pmens << endl;

      break;
    case 3:
      cout << "pension de los afiliados al sistema privado AFP" << endl;

      cout << "Ingrese: Cuenta Individual de Ahorro para Pensiones (CIAP): ";
      cin >> CIAP;

      cout << "Ingrese: Tasa de interés implícita (i): ";
      cin >> i;

      cout << "Ingrese (mp): ";
      cin >> mp;

      pmens = CIAP / ((pow((1 + i), 240) - 1) / (i * pow((1 + i), 240)) + 0.5 * (((pow(i + ief(i), 20)) - 1) * pow((1 + i), (mp - 1))) / (ief(i) * pow((1 + ief(i)), 20)));

      cout << "Resultado de pensión de AFP: $" << pmens << endl;

      break;
    case 4:
      cout << "Gracias, vuelva pronto" << endl;
      break;

    default:
      cout << "Error al ingresar la opcion" << endl;
      break;
    }
  } while (opcion != 4);

  return 0;
}

float Fi(float IPCr, float IPCi)
{
  return (IPCr / IPCi);
}

float SBR(float IPCr, float IPCi, int t, int w, float IBCc, float IBCd, int n)
{
  float sum1 = 0;
  float sum2 = 0;

  for (int i = 1; i <= (t - w); i++)
  {
    sum1 += (IBCc * Fi(IPCr, IPCi)) / 8.75;
  }

  for (int i = (t - w + 1); i <= t; i++)
  {
    sum2 += IBCd * Fi(IPCr, IPCr);
  }

  return (sum1 + sum2) / n;
}

float FactorIncremento(int ac, int opcion)
{
  int tasaIncremento = 0;
  int m = 0;

  if (opcion == 1)
  {
    tasaIncremento = 0.01;
    m = ac - 10;
  }
  else if (opcion == 2)
  {
    tasaIncremento = 0.0175;
    m = ac - 3;
  }

  return pow((1 + tasaIncremento), m);
}

float ief(float i)
{
  return pow((1 + i), 12) - 1;
}