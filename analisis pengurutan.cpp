#include <iostream>
using namespace std;

int main(){
  string makan;

  cout << "kamu mau makan apa? ";
  cout << "Masukkan makanan anda: ";

  getline(cin,makan);
  cout << "Saya nak makan " << makan;
}
