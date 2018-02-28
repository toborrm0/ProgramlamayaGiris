/*Fibonacci serisi
Fibonacci serisinin ilk iki elemaný 1'dir 
ve diðer elemanlarý, kendisinden önce gelen son iki elemanýn toplamýdýr.
Klavyeden bir sayý okuyarak, girilen sayý kadar fibonacci serisinin
elemanýný ekrana bastýran kodu yazýnýz.
 1 1 2 3 5 8 13 21 34 55 
*/
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	a = 1;
	b = 1;
	int n;
	cout << "Eleman sayisini giriniz: ";
	cin >> n;
	if (n <= 0)
		cout << "Pozitif sayi giriniz.." << endl;
	else{
		cout << "Fibonacci'nin ilk " << n << " elemani: " << endl;
		cout << a << " " << b << " ";
		for (int i = 2; i < n; i++) {
			c = a + b;
			a = b;
			b = c;
			cout << c << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}