/*Faça o algoritmo para calcular o valor de uma prestação em atraso com base na multa de 2% e também do juros mensal de 1% sobre o valor principal. Declare vetores explícitos para entrada do valor da prestação, valorprincipal [ ] e da quantidade de dias em atraso: dias [ ]. Armazene os resultados no vetor ValorPagar [ 5 ]. Ao final imprima a tabela com os vetores valorPrincipal [], dias [] e valorpagar[] .*/

#include <iostream>
#include <cstdlib>
#include <math.h>

//variáveis
int const multa = (2/100), juros (1/100);

//vetores
double valorPrestação [] = {100, 200, 300, 400, 500};
double valorPrincipal [] = {1100, 2200, 3300, 4400, 5500};
int diasAtraso [] = {10, 20, 30, 40, 50};
double valorPagar[5];
double multaJuros [5];

//sub rotinas

void imprimir ();

using namespace std;

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  system ("clear");
  imprimir();
return 0;
}

void imprimir ()
{
  int qtdValores = 5;
  for (int i = 0; i <= qtdValores - 1; i++)
  {
    double multa_ = valorPrestação [i] + valorPrincipal [i]* multa;
    double juros_ = valorPrestação [i] + valorPrincipal [i] * juros;
    double juros_multa = multa_ + juros_;
    double valorTot = valorPrincipal [i] + multa_ + juros_;

    multaJuros [i] = juros_multa;
    valorPagar [i] = valorTot;
 
    cout << "\nValor Principal....: " << valorPrincipal [i];
    cout << "\nValor da Prestação.: " << valorPrestação [i];
    cout << "\nDias em Atraso.....: " << diasAtraso [i];
    cout << "\nJuros e Multa......: " << multaJuros [i];
    cout << "\nValor Total a Pagar: " << valorPagar [i] << endl << endl;
    system ("sleep 2");
  }

}