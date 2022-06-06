// Nama : Ketut Gede Rai Wistika Putra
// NIM : 210030178
// PROGRAM A

#include <iostream>
using namespace std;
 
int main()
{
 
  short nilai;
  char nc;
  nt: cout << "===========================================================" << endl;
      cout << "|         Ketut Gede Rai Wistika Putra_210030178          |" << endl;
      cout << "===========================================================" << endl;
      cout << "|                        PROGRAM B                        |" << endl;
      cout << "===========================================================" << endl;
  
  
  cout << "Input Nilai Anda Dari Angka (0 - 100): ";
  cin >> nilai;
  cout <<"---------------------------------------------------------------\n\n";
  
     if (nilai >= 90 ) {
    cout << "                       Sangat Baik (A)                          " << endl;
  }
  else if (nilai >= 80 && nilai < 90) {
    cout << "                       Baik (B)                                 " << endl;
  }
  else if (nilai >= 60 && nilai < 80) {
    cout << "                       Cukup (C)                                " << endl;
  }
  else if (nilai >= 40 && nilai < 60) {        
    cout << "                       Kurang (D)                               " << endl;;
  }
  else if (nilai < 40) {
    cout << "                       Sangat Kurang (-D)                       " << endl;
  }
  else {
    cout << "Mohon Maaf, Format Yang Anda Masukan Tidak Sesuai" << endl;
  }
  
   cout << endl;
   cout << "=============================================================" << endl;
   cout << "\n Apakah Anda Ingin Menginput Ulang ? [Y/T] ? : ";
   cin >> nc;
   cout << "==============================================================" << endl;
   cout <<"|                      TERIMA KASIH                            |" << endl;
   cout << "==============================================================" << endl;
    if(nc == 'Y' || nc == 'y'){
        system("cls");
        goto nt;
    } else {
        exit(0);
    }
    return 0;
}
 
  
