#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream liczby;
    ofstream dodanie;
    ofstream ujemne;
    int liczba;
    liczby.open("liczby.txt");
    dodanie.open("dodanie.txt");
    ujemne.open("ujemne.txt");

    while (!liczby.eof()){
        int a = 0;
        int b = 0;
        int c = 0;
        liczby >> a;
        liczby >> b;
        c=a*b;
        cout << a << " ";
        cout << b << " = " << c << endl;
        if(c >= 0){
            dodanie << c << endl;
        }
        else {
            ujemne << c << endl;
        }
    }
    liczby.close();
    dodanie.close();
    ujemne.close();
    return 0;
}
