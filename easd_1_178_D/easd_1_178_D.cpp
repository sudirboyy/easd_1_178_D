// 1. Algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algorithma merupakan salah satu cara untuk menyelesaikan masalah yang rumit maupun sederhana dengan lebih terstruktur, lebih detail, dan lebih efisien.
// 2. Data struktur Quadratic dan Loglinear.
// 3. Faktor yang mempengaruhi adalah kecepatan mesin, complier yang berfungsi untuk menerjemahkan, operasi sistem, bahasa pemograman, size of the input, struktur data dan algoritma
// 4. Yang paling efisien untuk mengurutkan data yang ukurannya kecil yaitu QuickSort.
// 5. Quadratic : BubbleSort, InsertionSort, SelectionSort
//    Loglinear : QuickSort, MergeSort, ShellSort
// 6. Membuat sebuah program Selection Sort

#include <iostream>
using namespace std;

int sudir[98];
int n;

void input() {
	while (true)
	{
		cout << "Masukan Jumlah Data: ";
		cin >> n;

		if (n <= 98)
			break;
		else
			cout << "\nMaksimum Panjang Data adalah 98: " << endl;
	}
	cout << "\n====================" << endl;
	cout << "\nMasukkan Data" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> sudir[i];
	}
}

void selectionSort(int sudir[], int n) 
{
	for (int MS = 0; MS < n - 1; MS++) 
	{
		int min_index = MS;
		for (int i = MS + 1; i < n; i++) 
		{
			if (sudir[i] < sudir[min_index]) 
			{
				min_index = i;
			}
		}
		int temp = sudir[MS];
		sudir[MS] = sudir[min_index];
		sudir[min_index] = temp;
	}
}

void display() 
{
	cout << "\n===========================" << endl;
	cout << "Urutan Data" << endl;
	cout << "============================" << endl;

	for (int i = 0; i < n; i++)

	{
		cout << sudir[i] << " ";
	}

}

int main()
{
	input();
	selectionSort(sudir, n);
	display();
	return 0;
}



