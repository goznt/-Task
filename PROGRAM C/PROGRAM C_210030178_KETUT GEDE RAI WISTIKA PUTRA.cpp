// Nama : Ketut Gede Rai Wistika Putra
// NIM : 210030178
// PROGRAM C

#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos{
    public:
        string dataString;
        int dataInteger;
};

// class dengan constructor
class Siswa{
    public:
        string nama;
        string Nis;
        string jurusan;
        double Nilai;
        
        Siswa(string inputNama, string inputNis, string inputJurusan, double inputNilai){
            Siswa::nama = inputNama;
            Siswa::Nis = inputNis;
            Siswa::jurusan = inputJurusan;
            Siswa::Nilai = inputNilai;
    cout << "===========================================================" << endl;
            cout << Siswa::nama << endl;
            cout << Siswa::Nis << endl;
            cout << Siswa::jurusan << endl;
            cout << Siswa::Nilai << endl;
        }

};

int main(int argc, char const *argv[])
{
    Siswa Siswa1 = Siswa("Diah Maharani","2100301","MIPA",90);
    Siswa Siswa2 = Siswa("Ray","2345445","MIPA",89);
    
    
    cout << "===========================================================" << endl;
    cout << "|         Ketut Gede Rai Wistika Putra_210030178          |" << endl;
    cout << "===========================================================" << endl;
    cout << "|                        PROGRAM C                        |" << endl;
    cout << "===========================================================" << endl;

    // Polos objectPolos;
    // objectPolos.dataString = "polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.dataString << endl;
    // cout << objectPolos.dataInteger << endl;

    return 0;
}
