/*
dizideki en büyük 3 sayýnýn toplamýný bulan kod
*/
#include <iostream>
using namespace std;
int main()
{
	int a[8]={55,5,2,9,33,4,5,0};
	int eb=a[0];
	int eb2=-100;
	int eb3=-100;
		for(int i=1; i<8; i++)
		{ 
			if(eb<a[i])
			{
				eb3=eb2;
				eb2=eb;
				eb=a[i];
			}
			else if(eb2<a[i])
			{
				eb3=eb2;
				eb2=a[i];
			}
			else if(eb3<a[i])
			{
				eb3=a[i];
			}
		}
	cout << endl << eb << " > " << eb2 << " > " << eb3 << endl;
	cout << endl << "En buyuk 3 sayinin toplami= " << eb+eb2+eb3 << endl;
	return 0;
}
