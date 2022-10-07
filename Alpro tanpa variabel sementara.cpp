#include <iostream>
using namespace std;
int main(){
    //TUGAS 3
    //Tidak menggunakan variabel sementara
   int a = 9;
   int b = 18;

   a = a - b;
   b = a + b;
   a = b - a;

   cout << "Tidak Menggunakan Variabel Sementara" << endl;
   cout << "Hasil a = " << a << endl;
   cout << "Hasil b = " << b << endl;

   return 0;
}
