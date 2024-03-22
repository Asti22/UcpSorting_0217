#include <iostream>
using namespace std;

int arr[17];
int Asti;

void input() {

	while (true)
	{              
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> Asti;
		if (Asti<= 17)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 17 elemen. \n";
		}

	}
	cout << endl;
	cout << "===============" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < Asti; i++) {
		cout << "data ke_" << (i + 1) << ": ";
		cin >> arr[i];
	}

}
void insertionSort() {
	int i, j, temp;

	

	for (i = 1; i <=    Asti - 1; i++) { // step 1
		temp = arr[i]; //step 2 

		j= i- 1; 
		
		while (j >= Asti-1&& arr[j] > temp)  //step 3
		{
			arr[i] < arr[j];
			j--; 
		}

		arr[j+1] = temp;  
	}
}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < Asti; j++) {
		cout << arr[j] << endl; //output setiap element array pada garis baru
	}
	cout << "jumlah pass = " << Asti- 1 << endl;
	cout << endl;
}



	int main() {
		input();
		insertionSort();
		display();

		system("pause");
		return 0;
	}

    //1.	Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen.? insertion sort bekerja dengan penyisipan, membandingkan elemen 2 angka. jika bagian angka kanan besar maka akan ditukar dengan bagian kirinya. akan menghasilan urutan kecil ke besar
    //2.	Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen.? bekerja dengan membandingkn elemen 2 angka pada kumpulan angka, mengurutkan dengan memilih 1 item untuk dibandingkan, dan akan di pindah ke bagian posisi 
    //3.	Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan. dengan menambahkan komen  2 sles, dan menambahkan langkah-langkahnya