#include <iostream> 

using namespace std;
int main() {
  double peros, reais, soles;
  double dollars;

  cout << "Enter number of Colombian Peros: ";
  cin >> peros;
  cout << "Enter number of Colombian Reais: "; 
  cin >> reais; 
  cout << "Enter number of Colombian Soles: ";
  cin >> soles;
  
  // 1 Pesos = 0.049USD
  // 1 Reais = 0.19USD
  // 1 Soles = 0.27USD
  
  dollars = (0.049*peros) + (0.19*reais) + (0.27*soles);
  cout << "US Dollars = $" << dollars;
}
