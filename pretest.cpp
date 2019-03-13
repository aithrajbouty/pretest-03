/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   :
Tahun       : 2019
*/
#include <iostream>
#include <string.h>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};
typedef r_mhs larikMhs[30];

void banyakData(int& n){
    cout << "Masukkan banyak mahasiswa: "; cin >> n;
}

void inputMhs(larikMhs& mhs, int n){
    for(int i=0;i<n;i++){
        cout << "Mahasiswa " << i+1 << ":";
        cout << "NPM : "; cin >> mhs[i].npm;
        cout << "Nama : "; cin >> mhs[i].nama;
        cout << "IPK : "; cin >> mhs[i].ipk;
        cout << endl;
    }
}

/*void sortNama(larikMhs& mhs, int n){
    for(int i=0;i<n;i++){

    }
}*/

void cetakMhs(larikMhs& mhs, int n){
    //sortNama(mhs,n);
    for(int i=0;i<n;i++){
        cout << mhs[i].npm << "\t" << mhs[i].nama << "\t" << mhs[i].ipk;
    }
}

int main()
{
    int n;
    larikMhs mhs;
    banyakData(n);
    inputMhs(mhs,n);
    //sortNama(mhs,n);
    cetakMhs(mhs,n);
}
