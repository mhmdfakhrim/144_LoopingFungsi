#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

void input(){
  cout << "Nama Pembeli : ";
  cin >> nama;
  cout << " Jumlah Xpander : ";
  cin >> nXpander; 

  
  cout << " Jumlah Porsche : ";
  cin >> nPorsche; 

 
  cout << " Jumlah Avanza : ";
  cin >> nAvanza; 

 
  cout << " Jumlah Brio : ";
  cin >> nBrio; 


  cout << " Jumlah Lambo : ";
  cin >> nLamborghini; 
}

int TotalHarga(){
  return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini); 
}

void Display(){
  cout << "Total Harganya : " << TotalHarga() << endl; 
}
int main(){
  input();
  Display();
 
}