#include <iostream>
#include <string>
using namespace std;
double r, n, nminr, hasil;
int pilihan;
char yesno, sol;

void kombinasi(double n, double r) {
    
    if (r > n - r) r = n - r;   // C(n,r) = C(n,n-r)
    unsigned long long hasil = 1;
    for (int i = 1; i <= r; i++) {
        hasil = hasil * (n - r + i) / i;  // selalu habis dibagi
    }
    cout<<hasil;

}


int main() {
    system("cls");
    string soal;
    do{
    cin.clear();
    cout<<"=========================================================\n";
    cout<<"  PROGRAM IDENTIFIKASI & PERHITUNGAN KOMBINASI SEBAGIAN  \n";
    cout<<"=========================================================\n";
    cout<<"\nMasukkan soal anda:\n";
    cin.ignore();
    getline(cin, soal);
    cout<<"Soal:\n"<<soal<<endl;
    utama:
    cout<<"Masukkan\nNilai r: ";
    cin>>r;
    cout<<"Nilai n: ";
    cin>>n;
    if (n<=0 || r<0){
        cout<<"Nilai n harus > 0 dan r harus >= 0!";
        system("pause");
        return main();
    }
    cout<<"1. Tanpa Perulangan\n2. Dengan Perulangan"<<endl;
    cout<<"Masukkan pilihan anda: ";
    cin>>pilihan;
    switch(pilihan){
        case 1:
        if (!(r<n)){
            cout<<"Nilai r harus lebih kecil dari n.";
            system("pause > null");
            main();
        }
        cout<<"RUMUS: C(n, r) = n! / (r! * (n - r)!)\n\n";
        cout<<"PENGHITUNGAN FAKTORIAL: n! / (r! * (n - r)!)\n";
        cout<<"----------------------------------------------------------------------------------------------------------\n";
        cout<<"SUBSTITUSI: C(" << n << ", " << r << ") = " << n << "! / (" << r << "! * (" << n << " - " << r << ")!)\n";
        cout<<"HASIL AKHIR: ";
        kombinasi(n,r);
        cout<<endl;
        break;
        case 2:
        cout<<"RUMUS: C(n, r) = C(n + r - 1, r)\n";
        cout<<"PENGHITUNGAN FAKTORIAL: (n + r - 1)! / (r! * (n - 1)!)\n";
        cout<<"----------------------------------------------------------------------------------------------------------\n";
        cout<<"SUBSTITUSI: C(" << n << ", " << r << ") = " << n+r-1 << "! / (" << r << "! * (" << n << " -  1 )!)\n";
        cout<<"HASIL AKHIR: ";
        kombinasi(n+r-1,r);
        cout<<endl; 
        break;
        default:
        cout<<"Pilihan tidak ada!\n";
        system("pause > null");
        main();
        break;
    }
    cout<<"Apakah sudah selesai? (y/n): ";
    cin>>yesno;
    if (yesno == 'n' || yesno == 'N') {
        goto utama;
    }else if (yesno == 'y' || yesno == 'Y'){
        goto akhir;
    }
    
    
    akhir:
    cout<<"Apakah ada soal lain? (y/n): ";
    cin>>sol;
    if(sol == 'y' || sol == 'Y'){
        system("cls");
        main();
    }
}while (sol != 'n' && sol != 'N');

cout<<"Terima kasih...\n";
system("pause > null");
}
        //acct jn dry text dong :'(