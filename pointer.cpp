#include <iostream>
using namespace std;

class persegipanjang
{
    public :
        int panjang, lebar;
        int luaspersegipanjang(int b, int a)
        {
            return a * b;
        }
};

class segitiga
{
    public:
        int tinggi, alas;
        int luassegitiga(int a, int t)
        {
            return 0.5 * a * t;
        }

        int hitung(persegipanjang p)
        {
            return p.panjang;
        }
};

int main()
{
    persegipanjang pp;
    segitiga sg;
    cout << "Masukan Panjang: ";
    cin >> pp.panjang;
    cout << "Masukan Lebar: ";
    cin >> pp.lebar;
    cout << "Masukan Tinggi: ";
    cin >> pp.tinggi;
    cout << "Masukan Alas: ";
    cin >> pp.alas;
    cout << "Luas Persegi Panjang: " << pp.luaspersegipanjang(pp.panjang, pp.lebar) << endl;
    cout << "Luas Segitiga: " << sg.luassegitiga(sg.alas, sg.tinggi) << endl;
}