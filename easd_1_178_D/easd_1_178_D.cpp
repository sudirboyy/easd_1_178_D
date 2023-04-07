// 1. Algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algorithma merupakan salah satu cara untuk menyelesaikan masalah yang rumit maupun sederhana dengan lebih terstruktur, lebih detail, dan lebih efisien.
// 2. Data struktur Quadratic dan Loglinear.
// 3. Faktor yang mempengaruhi adalah kecepatan mesin, complier yang berfungsi untuk menerjemahkan, operasi sistem, bahasa pemograman, size of the input, struktur data dan algoritma
// 4. Yang paling efisien untuk mengurutkan data yang ukurannya kecil yaitu QuickSort.
// 5. Quadratic : BubbleSort, InsertionSort, SelectionSort
//    Loglinear : QuickSort, MergeSort, ShellSort
// 6. Membuat sebuah program Selection Sort

#include <iostream>
#include <string>
using namespace std;

// Menginputkan Prosedur
void input(int arr[], int size) {
    cout << "Masukkan " << size << " Elemen Array :" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Masukkan " << i + 1 << " dari " << size << " elemen array:";
        cin >> arr[i];
    }
}




