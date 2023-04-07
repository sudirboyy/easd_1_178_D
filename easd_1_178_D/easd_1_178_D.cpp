// 1. Algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algorithma merupakan salah satu cara untuk menyelesaikan masalah yang rumit maupun sederhana dengan lebih terstruktur, lebih detail, dan lebih efisien.
// 2. Data struktur Quadratic dan Loglinear.
// 3. Faktor yang mempengaruhi adalah kecepatan mesin, complier yang berfungsi untuk menerjemahkan, operasi sistem, bahasa pemograman, size of the input, struktur data dan algoritma
// 4. Yang paling efisien untuk mengurutkan data yang ukurannya kecil yaitu QuickSort.
// 5. Quadratic : BubbleSort, InsertionSort, SelectionSort
//    Loglinear : QuickSort, MergeSort, ShellSort
// 6. Membuat sebuah program Selection Sort

// PERTANYAAN 1 : Mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah?
// JAWAB        : Suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algoritma merupakan gabungan langkah-langkah yang digunakan untuk menyelesaikan masalah. 

// PERTANYAAN 2 : Dalam algorithma, di klassifikasikan menjadi 2 data struktur. Sebutkan 2 data struktur tsb!
// JAWAB        : 2 Data Struktur tersebut yaitu Linear Data Structure dan Non-Linear Data Structure

// PERTANYAAN 3 : Sebutkan faktor-faktor yang mempengaruhi mempengaruhi efisiensi suatu program algorithma!
// JAWAB	    : 6 Faktor yang mempengaruhi efisiensi suatu data progam algorithma yaitu Ukuran Input, Struktur Data, Kompleksitas Algoritma, Penggunaan Memory, Bahasa Pemrograman, Algoritma yang Dipilih

// PERTANYAAN 4 : Dari 6 algorithma yang sudah dipelajari. Algortihma manakah yang paling efisien untuk mengurutkan data yang ukurannya kecil.Jelaskan kenapa anda memilih itu.
// JAWAB	    : Karena Selection Sort memiliki kompleksitas waktu O(n^2) yang relatif lebih cepat dibandingkan dengan algoritma Insertion Sort dan Bubble Sort, yang kompleksitas waktu nya juga O(n^2). Selain itu, Selection Sort juga sederhana dan mudah dipahami dalam implementasinya, sehingga lebih mudah untuk digunakan dalam pengurutan data kecil.

// PERTANYAAN 5 : Sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mana yang termasuk kedalam Loglinear.
// PERTANYAAN   : Quadratic (O(n^2)): Bubble Sort, Selection Sort, Insertion Sort. Loglinear (O(n log n)): Merge Sort, Quick Sort

// Buatlah sebuah program yang mengimplementasikan selection sort menggunakan bahasan c++.

// Berikut merupakan algortithma selection sort :

   // 1. Repeat steps 2 and 3 varying j from 0 to n – 2

   // 2. Find the minimum value in arr[j] to arr[n – 1]:
         // a.Set min_index = j
         // b.Repeat step c varying i from j + 1 to n – 1 c.If arr[i] < arr[min_index] :
         // c. If arr[i] < arr[min_index]:
            // 1. min_index = i

   // 3. Swap arr[j] with arr[min_index]

// There are additional requirements to create the program :
        // a. The maximum number of data is the sum of the last two digits of your student number + 20-2 x 15 + 10 + 20
        // b.  Change the "j" in the algorithm to the two initials of your name. 
        // (example: if your name is Fahmi Azhar then “f” is changed to “FA”, if your name consists of more than 2 words, the initials are taken from the first letter of your name and one letter from your last name)
        // c. Change "arr" with your nickname.
        // d. Code must have 3 Procedure Input, Algorithm and Display.

#include <iostream>
#include <string>
using namespace std;

// Menginputkan Prosedur
void input(int arr[], int size) {
    cout << "Masukkan " << size << " Elemen Integer Array :" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Algoritma Selection Sort
void selectionSort(int arr[], int size) {
    string initials = "AM";                                                     // inisial dari nama lengkap saya [Abdullah Maajid]
    for (int initialsIndex = 0; initialsIndex < size - 1; initialsIndex++) {
        int min_index = initialsIndex;
        for (int i = initialsIndex + 1; i < size; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        if (min_index != initialsIndex) {
            swap(arr[initialsIndex], arr[min_index]);
        }
    }
}

// Menampilkan Prosedur
void display(int arr[], int size) {
    cout << "Array yang telah diurutkan : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout  << endl;
}
// Main Function
int main() {
    int size = 28; // change with the maximum number of data
    int arr[size];

    input(arr, size);

    selectionSort(arr, size);

    display(arr, size);

    return 0;
}
 