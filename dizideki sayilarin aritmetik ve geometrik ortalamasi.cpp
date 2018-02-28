/*
verilen dizideki sayilarin aritmetik ve geometrik ortalamasini donduren kod
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a[9]={1,2,-3,30,-15,3,8,4,1};
	int toplam=0;
	int carpim=1;
	for(int i=0; i<9; i++)
	{
		toplam+=a[i];
		carpim*=a[i];
	}
	cout << "dizinin aritmetik ortalamasi: " << (float)toplam/9 << endl;
	cout << "dizinin geometrik ortalamasi: " << pow(carpim, (float)1/9) << endl;
    return 0;
}

