#include <iostream>

using namespace std;

int main()
{
  int n;
  int count = 0;
  int total = 0;

  for(;;){
    cout << "Digite um numero: " << endl;
    cin >> n;
    if(n != 9999){
      count++;
      total = total + n;
    }
    else{
      break;
    }
  }
  cout << "A media e: "<< static_cast<double> (total)/count << endl;

  return 0;
}