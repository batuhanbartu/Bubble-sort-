#include <iostream>
#include <locale.h>
#define MAX 100
//Bubble Sort 
using namespace std;

void bubbleSort(int dizi[], int boyut)
{
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 1; j < boyut - i; j++)
        {
            if (dizi[j - 1] > dizi[j])
            {
                int gecici = dizi[j];
                dizi[j] = dizi[j - 1];
                dizi[j - 1] = gecici;
            }
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Turkish");

    int tamSayiDizisi[MAX], boyut;

    cout << "Girilecek sayı adeti: ";
    cin >> boyut;

    for (int i = 0; i < boyut; i++)
    {
        cout << i + 1 << ")" << "Sayı giriniz: ";
        cin >> tamSayiDizisi[i];
    }

    cout << "Girdiğiniz dizideki sayılar: ";
    for (int i = 0; i < boyut; i++)
    {
        cout << tamSayiDizisi[i] << " ";
    }
    cout << endl;

    bubbleSort(tamSayiDizisi, boyut);
    cout << "Girdiğiniz dizinin Kabarcık Sıralamasına göre sıralı halindeki sayılar: ";
    for (int i = 0; i < boyut; i++)
    {
        cout << tamSayiDizisi[i] << " ";
    }
}