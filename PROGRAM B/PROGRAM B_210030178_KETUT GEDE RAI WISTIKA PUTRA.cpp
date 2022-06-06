// Nama : Ketut Gede Rai Wistika Putra
// NIM : 210030178
// PROGRAM B

#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void belahketupat();  
void persegipanjang();  
void lingkaran();   
int main()
{
    int pil;
    char menu;

    do{
    system("cls");
    cout << "===========================================================" << endl;
    cout << "|         Ketut Gede Rai Wistika Putra_210030178          |" << endl;
    cout << "===========================================================" << endl;
    cout << "|                        PROGRAM B                        |" << endl;
    cout << "===========================================================" << endl;
    cout << "|   Pilih Menu Bangun Datar Yang Akan Digunakan :         |" << endl;
    cout << "|                                                         |" << endl;
    cout << "|1. Belah Ketupat                                         |" << endl;
    cout << "|2. Persegi Panjang                                       |" << endl;
    cout << "|3. Lingkaran                                             |" << endl;
    cout << "===========================================================" << endl;
    cout<<endl;
    cout<<" \n Menu Yang Anda Pilih Adalah: ";
    cin>>pil;

    if (pil==1)
    {
        belahketupat();
    }

    else if (pil==2)
    {
        persegipanjang();
    }

    else if (pil==3)
    {
        lingkaran();
    }
    else
    {
    	cout << "===================================================================" << endl;
        cout<<" Maaf pilihan anda belum tersedia. Silahkan kembali ke menu pilihan  "<<endl;
        cout << "===================================================================" << endl;
    }
    cout<<endl;
     cout << "===========================================================" << endl;
    cout<<" Apakah anda ingin kembali ke menu[Y/T]:";
    cin>>menu;

    }while(menu=='y' || menu=='Y');

}

void belahketupat(){
	float d1,d2,s,K,L;
    cout<<"	Luas Dan Keliling Belah Ketupat \n"<<endl;
    cout << "===========================================================" << endl;
	cout<<"Mencari sisi s (sisi)"<<endl;
	cout << "===========================================================" << endl;
    cout<<"Diagonal 1 : ";cin>>d1;
    cout<<"Diagonal 2 : ";cin>>d2;
    s = sqrt(pow(d1,2)+pow(d2,2));
    cout << "===========================================================" << endl;
	cout<<"Sisi adalah = "<<s<<endl;
	cout << "===========================================================" << endl;
	K=4*s;
	L=d1*d2/2;
	cout<<"\n Luas     : "<<L<<endl;
	cout<<"\n Keliling : "<<K<<endl;
}
	
void persegipanjang(){
   float p,l,luas,kll;
   cout<<("	Luas Dan Keliling Persegi Panjang\n");
   cout << "===========================================================" << endl;
   cout<<("\n Masukan panjang : ");cin>>p;
   cout<<("\n Masukan lebar : ");cin>>l;
   luas=p*l;
   cout << "===========================================================" << endl;
   cout<<("\n Luas : ");cout<<luas;
   cout<<endl;
   kll=(2*p)+(2*l);
   cout<<("\n Keliling : ");cout<<kll;
}

void lingkaran(){
    float r, L, K;
    cout<<(" Luas Dan Keliling Lingkaran\n");
    cout << "===========================================================" << endl;
    cout<<(" Masukan jari jari (r) : ");cin>>r;
	L = (double) 22 / 7 * r * r;
    K = 2 * ((double) 22 / 7) * r;
    cout << "===========================================================" << endl;
   	cout << "\n Luas  : " << L << endl;
	cout << "\n Keliling  : " << K << endl;
}

