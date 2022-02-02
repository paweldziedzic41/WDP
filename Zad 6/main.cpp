#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik;
    ofstream zapis;
    int N = 100;
    char *tab = new char [N];
    int j = 0;
    plik.open("plik.txt");
    zapis.open("zapis.txt");
    char znak;
    cout << "Wyjscie: " << endl;
    while (plik >> znak){
        tab[j] = znak;
        j++;
        if(znak > 95){
            cout << (char)(znak-32);
            zapis << (char)(znak-32);
        }
        else{
            cout << (char)(znak+32);
            zapis << (char)(znak+32);
        }
    }
    cout << endl;
    cout << "Wejscie: " << endl;
    for(int i=0;i<j;i++){
        cout << tab[i];
    }
    zapis.close();
    plik.close();
    return 0;
}
