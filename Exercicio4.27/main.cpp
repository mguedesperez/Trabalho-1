#include <iostream>
#include <cmath>

using namespace std;

int ConverterBinarioDecimal(int);
bool isBinario(int);

int main()
{
  int n;
  bool bin = false;

  while (!bin){
    cout << "Entre com um número binário: " << endl;
    cin >> n;
  
    bin = isBinario(n);

    if (bin){
      cout << n << " em binário = " << ConverterBinarioDecimal(n) << " em decimal!";
    } 
    else {
      cout << "Esse número não é binario" << endl;
    }
  }
  return 0;
}

int ConverterBinarioDecimal(int n)
{
    int numeroDecimal = 0, i = 0, resto;
    while (n!=0)
    {
      resto = n%10;
      n = n/10;
      numeroDecimal = numeroDecimal + resto*pow(2,i);
      i++;
    }
    return numeroDecimal;
}

bool isBinario (int binario){
  string aux = to_string (binario);
  for(int i = 0; i < aux.size(); ++i) {
    if(aux[i] != '0' && aux[i] != '1')
      return false;
  }
  return true;
}