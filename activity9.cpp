#include <iostream>
using namespace std;

class Mahasiswa {
    private :
        static int totalMahasiswa;
    public :
        string nama;
        string status;
        int usia;

        Mahasiswa(string pNama, int pUsia) {
            nama = pNama;
            usia = pUsia;
            status = "Mahasiswa Baru";
            ++totalMahasiswa;
            cout << nama << " Dibuat" << " Status " << status << endl;
            cout << endl;
        }

        ~Mahasiswa() {
            cout << nama << " Dihancurkan" << endl;
            --totalMahasiswa;
            cout << endl;
        }

        static int gettotalMahasiswa() {
            return totalMahasiswa;
        }
};


int Mahasiswa::totalMahasiswa = 0;

int main() {

    cout << "Total Mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;

    Mahasiswa mhs1("Maman", 40);
    Mahasiswa mhs2("Agus", 34);
    
    cout << "Total Mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;

    {
        Mahasiswa mhs3("Budi", 19);
        Mahasiswa mhs4("Caca", 21);
        cout << "Total Mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;

    }
    cout << "Total Mahasiswa adalah " << Mahasiswa::gettotalMahasiswa() << endl;

}