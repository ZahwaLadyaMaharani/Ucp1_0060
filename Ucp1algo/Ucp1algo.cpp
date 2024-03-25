
//Jawaban soal teori UCP 1
// no 1 bagaimana bubble sort membandingkan serta menukar elemen-elemen yaitu, mengurutkan data dan membandingkan elemen masing masing, melakukan penukaran data secara terus menerus. pertukaran ini akan berhenti jika sudah tercapai pengurutan.
// serta mengurutkannya berdasarkan urutan yang ditentukan dari kiri ke kanan
//no 2 bagaimana algoritma shell sort membandingkkan serta menukar elemen tertentu, yaitu dengan memindahkan satu elemen ke elemen berikutnya. membandingkan jarak tertentu. melaukukan penukaran bila diperlukan.
//no 3, untuk algoritma sortir yang terbaik adalah insertion  sort karena membagi array pengurutan waktunya lebih efektif dan efisien
//no 4 :

#include <iostream>
using namespace std;


int alya[20];                //Deklarasi array a dengan ukuran 20
int n;                    //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input()
{
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }

    }
    cout << endl;
    cout << "=======================" << endl;
    cout << "Masukan Eleman Array" << endl;
    cout << "=======================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke -" << (i + 1) << ": ";
        cin >> alya[i];
    }
}

void selectionsort() {

    int temp;
    int i, j;

    for (i = 1; i <= n - 2; i++) {

        temp = alya[i];

        j = i - 1;

        while (j >= 0 && alya[j] > temp)

        {
            alya[j + 1] = alya[j];
            j--;
        }

        alya[j + 1] = temp;

        cout << "\nPass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << alya[k] << " ";
        }
    }
}
    void display() {                          
        cout << endl;                       
        cout << "=======================" << endl;      
        cout << "ELEMEN Array yang telah tersusun" << endl;       
        cout << "=======================" << endl;      
        for (int j = 0; j < n; j++)
        {                   
            cout << "Data ke -" << j + 1 << ": ";
            cout << alya[j] << endl;                       
        }
        cout << endl;                                  
    }
    int main()
    {
        input();                        
        selectionsort();              
        display();                     
        return 0;

    }


    



