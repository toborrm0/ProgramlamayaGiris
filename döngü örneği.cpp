/*
1.Kolonda: 1'den 100'e kadar olan 15'in katları
2.Kolonda: 1'den 30'a kadar olan 5'in katları
3.Kolonda 100'den 50'ye kadar olan 10'un katları
4.Kolonda 2'den 64'e kadar olan 2'nin üstleri
*/
#include <iostream>
using namespace std;

int main() {
	//while
	int i = 15;
	int j = 5;
	int k = 100;
	int l = 2;
	while (i < 100) {
		cout << i << " " << j << " " << k << " " << l << endl;
		i += 15;
		j += 5;
		k -= 10;
		l *= 2;
	}
	cout << endl;
	//for
	int us = 2;
	for (int i = 1; i <= 6; i++) {
		cout << i * 15 << " " << i * 5 << " " << 100 - ((i - 1) * 10) << " " << us << endl;
		us *= 2;
	}

	system("pause");
	return 0;
}