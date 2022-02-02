#include <iostream>
#include <time.h>
using namespace std;

void wpisz(int tab[],int N){
    srand(time(NULL));
    for (int i=0; i<N; i++){
        tab[i] = rand() % 20;
    }
}
int zlicz(int tab[],int N){
    int licznik = 0;
    for(int i=1; i<N; i++){
        if(tab[i] == tab[0]){
            licznik++;
        }
    }
    return licznik;
}
int main()
{
    int N;
    int licznik = 0;
    cout << "Podaj rozmiar tablicy: ";
    cin >> N;
    int* tab = new int [N];
    wpisz(tab,N);
    for (int i=0; i<N; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    licznik = zlicz(tab,N);
    if(licznik != 0){
        cout << "Wystapienia " << tab[0] << " : " << licznik;
    }
    else{
        cout << "Brak wystapien " << tab[0];
    }
    cout << endl;
    return 0;
}
