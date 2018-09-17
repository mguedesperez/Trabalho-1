#include <iostream>
#include <string>

using namespace std;

class Invoice {
  string identificador;
  string descricao;
  int qtditem;
  int preco;

public: // é um contrutor tem o mesmo nome da classe
  Invoice (string a, string b, int c, int d){
    identificador = a;
    descricao = b;
    qtditem = c;
    preco = d;
  };

  void setIdentificador (string id){
    identificador = id;
  }
  string getIdentificador (){
    return identificador;
  }
  void setDescricao (string desc){
    descricao = desc;
  }
  string getDescricao (){
    return descricao;
  }
  void setQtditem (int qitem){
    qtditem = qitem;
  }
  int getQtditem (){
    return qtditem;
  }
  void setPreco (int p){
    preco = p;
  }
  int getPreco (){
    return preco;
  }

  int getInvoiceAmount(){
    if (qtditem < 0){
      qtditem = 0;
    }
    if (preco < 0){
      preco = 0;
    }
    return preco * qtditem;
  }
};
