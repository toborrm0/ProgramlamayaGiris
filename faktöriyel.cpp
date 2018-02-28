//faktöriyel hesaplayan kod
#include <iostream>
using namespace std;

int main() {

	int fact = 1;
	int a;
	cout << "Pozitif bir sayi giriniz: " << endl;
	cin >> a;
	for (int i = 2; i <= a; i++) {
		fact *= i;
	}
	if (a < 0)
		cout << "Lutfen pozitif bir sayi giriniz. " << endl;
	else
		cout << a << "! = " << fact << endl;

	system("pause");
	return 0;
}