/*
2 boyutlu bir tablo olarak, ekrana �arp�m 
tablosunu hesaplay�p yazan kodu yaz�n�z.
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Carpim tablosunun boyutunu giriniz: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}