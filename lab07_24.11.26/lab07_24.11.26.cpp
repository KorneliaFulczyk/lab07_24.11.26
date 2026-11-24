// lab07_24.11.26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int swap(int *a, int *b);
int c = 10, d= 20; //zmienne globalne do zad 2.3
float srarytm(float* tab, int* size); //zadanie 4

int main()
{
    /*
    //zadanie 2.1
    const int size = 3;
    int tab[size] = { 5, 6, 7 };
    for(int i = 0; i < size; i++)
    {
        cout << "Wartosc tablicy dla indeksu " << i << " wynosi: " << tab[i] << endl;

    }
    //deklarujemy drug¹ tablicê,która przechowuje wskaŸniki dla typu int
    int* ptr[size];
    for(int i = 0; i < size; i++)
    {
        ptr[i] = &tab[i]; //przypisujemy wartoœæ z tablicy do wskaŸnika
    }
    for(int i = 0; i < size; i++)
    {
        cout << "Wartosc wskaznika dla indeksu " << i << " wynosi: " << *ptr[i] << endl;
    }

    int* p = tab; //przypisujemy adres pierwszego elementu tablicy do wskaŸnika
    for (int i = 0; i < size; i++)
    {
        cout << "Wartosc wskaznika p dla indeksu " << i << " wynosi: " << *p++ << ". Adres to: "<< p <<endl;

    }
    */

    /*
    //zadanie 2.3 - ze wskaznikami
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << "Przed zamiana: a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "Po zamianie: a = " << a << ", b = " << b << endl;


    //zmienne globalne
    cout << "Przed zamiana: c = " << c << ", d = " << d << endl;
    swap(&c, &d);
    cout << "Po zamianie: c = " << c << ", d = " << d << endl;

    */

    /*
    //zadanie 1
    int x;
    int* ptr;

    ptr = &x; //pobiera adres zmiennej

    cout << "Podaj wartosc x: ";
    cin >> *ptr;
   

    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc pod wskaznikiem: " << *ptr << endl;
    cout << "Adres zmiennej x (ptr): " << ptr << endl;
    cout << "Adres zmiennej x (&x): " << &x << endl;

    */

    //zadanie 2
    /*

    int jakas_tablica[10];
    int* wsk;
    wsk = jakas_tablica; //wskaŸnik wskazuje na pierwszy element tablicy
    wsk = &jakas_tablica[0]; //wskaŸnik wskazuje na pierwszy element tablicy

    //wsk++; //przesuwamy wskaŸnik na drugi element tablicy
    //(*wsk)++; //zwiêkszamy wartoœæ drugiego elementu tablicy o 1


    cout << "Podaj wartosci tablicy: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> jakas_tablica[i];
    }
    cout << endl;

    cout << "Tablica przed zmiana: ";
    for (int i = 0; i < 10; i++)
    {
        cout << jakas_tablica[i] << " ";
    }
    cout << endl;


    *(wsk + 7) = 77; //zmiana wartoœci elementu o indeksie 7 na 77
    cout << "Tablica po zmianie: ";
    for (int i = 0; i < 10; i++)
    {
        cout << jakas_tablica[i] << " ";
    }
    cout << endl;
    */

    /*
    //zadanie2.1
    int tab[10] = { 0 };
    int *wsk;

    wsk = tab; // wskaŸnik wskazuje na pierwszy element tablicy

    //kontrolnie
    for (int i = 0; i < 10; i++)
    {
        cout << "Poczatkowa wartosc tablicy dla indeksu " << i << " wynosi: " << tab[i] << endl;

    }
    cout << endl;

    for(int i = 0; i<10; i++)
    {
        *(wsk + i) = 9; // przypisujemy wartoœci do tablicy za pomoc¹ wskaŸnika
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Wartosc tablicy dla indeksu " << i << " wynosi: " << *(wsk + i) << endl;

    }
    */

/*
    //zadanie 3
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    float* tablica = new float[n]; // dynamiczna tablica

    for (int i = 0; i < n; i++) {
        tablica[i] = i;
        cout << tablica[i] << " ";
    }

    float* wsk;
    int i = n - 1;
    wsk = &tablica[i];

    while (1) {
        
       
            if (*wsk == 0)
            {
                cout << "Wartosc indeksu wynosi: " << i<< endl;
				
            break;
            }
            else {
                wsk--;
            }
            i--;

    }
    */
    
// /*
//zadanie 4
srand(time(NULL));
int n;
cout << "Podaj rozmiar tablicy: ";
cin >> n;
float* tablica = new float[n];

cout << "Zawartosc tablicy: \n";
for (int i = 0; i < n; i++) {
    tablica[i] = rand()%1000;
    cout << tablica[i] << " ";
}
cout << endl;

srarytm(tablica,&n);
delete []tablica;
//*/
}

//zadanie 2.3
int swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

 float srarytm(float tab[], int* size)
{
    float suma = 0;
    int licznik = 0;
    for (int i = 0; i < *size; i++)
    {
        suma += tab[i];
        licznik++;
    }
    float srednia = 0;
    srednia = suma / licznik;

    cout << "Srednia arytmetyczna: " << srednia << endl;
    return srednia;
}