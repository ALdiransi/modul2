#include <iostream>
using namespace std;

int main() {
  int n, i;

  // Meminta user untuk memasukkan jumlah elemen array
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  // Deklarasi array dengan panjang n
  int arr[n];

  // Meminta user untuk memasukkan nilai elemen array
  cout << "Masukkan " << n << " angka:\n";
  for (i = 0; i < n; i++) {
    cout << "Array ke-" << (i + 1) << ": ";
    cin >> arr[i];
  }

  // Menampilkan data array genap dan ganjil
  cout << "\nData Array Genap:\n";
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << " ";
    }
  }

  cout << "\n\nData Array Ganjil:\n";
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
