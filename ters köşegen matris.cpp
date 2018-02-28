/*
 + * Matrisin boyutunu kullanýcýdan okuyup. Sadece diyagonu (köþegeni)
 + * 1 olan ve diðer elemanlarý 0 olan bir kare matrisi ekrana bastýrýn.
 + */
#include <iostream>
	 using namespace std;
int main()
 {
	int n;
	cout << "Matris boyutunu giriniz: ";
	cin >> n;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			if (i+j==(n-1))
			    cout << "1";
			else
				cout << "0";
			
		}
		cout << endl;
		
	}
	system("pause");
	return 0;
	}