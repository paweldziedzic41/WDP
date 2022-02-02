#include <iostream>
#include <time.h>
using namespace std;

void wpisz(int tab[],int N){
    srand(time(NULL));
    for (int i=0; i<N; i++){
        tab[i] = rand();
    }
}

int main()
{
    int N;
    cout << "Podaj rozmiar tablicy: ";
    cin >> N;
    int* tab = new int [N];
    wpisz(tab,N);
    for (int i=0; i<N; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}
