#include<iostream>
#include<string>
using namespace std;

int main() {
    const int b = 15;
    const int k = 6;
    char kursi [b][k];
    int terisi, baris;
    string kolom;
    string kelas;

    kursi[0][0] = terisi;
    kursi[0][1] = terisi;
    kursi[1][3] = terisi;
    kursi[1][4] = terisi;
    kursi[2][2] = terisi;
    kursi[2][3] = terisi;
    kursi[3][2] = terisi;
    kursi[3][3] = terisi;
    kursi[5][3] = terisi;
    kursi[5][4] = terisi;
    kursi[5][5] = terisi;
    kursi[6][2] = terisi;
    kursi[7][2] = terisi;
    kursi[8][0] = terisi;
    kursi[8][1] = terisi;
    kursi[8][5] = terisi;
    kursi[9][4] = terisi;
    kursi[9][5] = terisi;
    kursi[10][2] = terisi;
    kursi[10][3] = terisi;
    kursi[12][4] = terisi;
    kursi[12][5] = terisi;
    kursi[13][4] = terisi;
    kursi[14][0] = terisi;
    kursi[14][1] = terisi;
    kursi[14][2] = terisi;
    kursi[14][4] = terisi;

    cout<<"Terdapat 3 kelas tiket pesawat yaitu ekonomi, bisnis, dan utama"<<endl;
    cout<<"Kelas utama ada di kursi baris ke 1-2, kelas bisnis baris ke 3-5, dan ekonomi baris 6-15"<<endl;
    cout<<"Kelas tiket pesawat anda adalah : "<<endl;
    cin>>kelas;

    cout<<"Pilih baris kursi yang diinginkan :"<<endl;
    cin>>baris;
    cout<<"Pilih kolom kursi yang diinginkan (A-F) :"<<endl;
    cin>>kolom;

    int col = kolom[0] - 'A';
    
    if ((kelas == "ekonomi" && baris < 5) || (kelas == "bisnis" && (baris < 2 || baris > 4)) || (kelas == "utama" && baris > 1)) {
        cout << "Baris kursi yang Anda pilih tidak sesuai dengan kelas Anda." << endl;
        return 0;
    }

    if (kursi[b][k] != terisi) {
        cout << "Tiket pesawat berhasil dibooking." << endl;
    } else {
        cout << "Kursi sudah terisi." << endl;
    }

    return 0;
}