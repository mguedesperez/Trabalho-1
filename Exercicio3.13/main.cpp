#include <iostream>
#include <string>

#include "Invoice.h"

using namespace std;

int main() {
  Invoice i1 ("01", "Mouse", 1, 25);
  Invoice i2 ("02", "Teclado", 2, 35);
  Invoice i3 ("03", "Monitor", 4, 320);
  Invoice i4 ("04", "CPU", 10, 1580);


  cout<< "Identificador da fatura 1: " << i1.getIdentificador() <<endl;
  cout<< "Item comprado da fatura 1: " << i1.getDescricao() <<endl;

  cout<< "Quantidade de itens comprados da fatura 2: " << i2.getQtditem() <<endl;
  i2.setQtditem(10);
  cout<< "Nova quantidade de itens comprados da fatura 2: " << i2.getQtditem() <<endl;
  
  
  cout<< "Preço do item da fatura 3: " << i3.getPreco() <<endl;
  
  cout<< "Quatidade de itens da fatura 4: " << i4.getQtditem() <<endl;
  cout<< "Preço do item da fatura 4: " << i4.getPreco() <<endl;
  cout<< "Quantia da fatura 4: " << i4.getInvoiceAmount() <<endl;
  
  i4.setQtditem(-10);
  cout<< "Quantia da fatura 4 quando quantidade de itens negativa: " << i4.getInvoiceAmount() <<endl;

  i4.setQtditem(10);
  i4.setPreco(-15800);
  cout<< "Quantia da fatura 4 quando valor de itens negativo: " << i4.getInvoiceAmount() <<endl;

return 0;
}
