#include <iostream>
using namespace std;

int main() {
  int x, y, z, i, j, k;

  // Meminta user untuk memasukkan ukuran array
  cout << "Masukkan dimensi x array: ";
  cin >> x;
  cout << "Masukkan dimensi y array: ";
  cin >> y;
  cout << "Masukkan dimensi z array: ";
  cin >> z;

  // Deklarasi array tiga dimensi
  int arr[x][y][z];

  // Meminta user untuk memasukkan nilai elemen array
  cout << "Masukkan nilai elemen array:\n";
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      for (k = 0; k < z; k++) {
        cout << "Array[" << i << "][" << j << "][" << k << "]: ";
        cin >> arr[i][j][k];
      }
    }
  }

  // Menampilkan nilai elemen array
  cout << "\nNilai elemen array:\n";
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      for (k = 0; k < z; k++) {
        cout << arr[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
