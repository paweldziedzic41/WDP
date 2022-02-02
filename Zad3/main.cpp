#include <iostream>
#include <time.h>
using namespace std;

void wpisz(int tab[],int N)
{
    srand(time(NULL));
    for (int i=0; i<N; i++){
        tab[i] = rand() % 20;
    }
}

int policz(int tab[],int N, int x)
{
    float srednia;
    int wynik = 0;
    int licznik = 0;
    for(int i=0; i<N; i++){
        if(tab[i] > x){
            wynik = wynik + tab[i];
            licznik++;
        }
    }
        srednia = wynik/licznik;
        return srednia;
}

int main()
{
    int N;
    int x;
    float srednia;
    cout << "Podaj rozmiar tablicy: ";
    cin >> N;
    int* tab = new int [N];
    wpisz(tab,N);
    for (int i=0; i<N; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    warunek:
    cout << "Podaj wartosc zmiennej x (w przedziale od 0 do 20): ";
    cin >> x;
    if(x < 0 || x > 20){
        goto warunek;
        return 0;
    }
    cout << endl;
    srednia = policz(tab,N,x);
    cout << srednia;

    return 0;
}
