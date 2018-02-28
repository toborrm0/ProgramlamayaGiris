/*
dizideki çift sayýlarýn en büyüðü ile en küçüðünün ortalamasý
*/
#include <iostream>
using namespace std;

int main()
{
	int a[7]={1,0,3,9,6,4,8};
	int eb=0;
	int ek=0;
		for(int i=1; i<7; i++)
		{	
			if(eb<a[i] && a[i]%2==0)
			{
				eb=a[i];
			}
			if(ek>a[i] && a[i]%2==0)
			{
				ek=a[i];
			}
		}
	cout << "en buyuk cift: " << eb << "	en kucuk cift: " << ek << endl;
	cout << "ortalamasi: " << (eb+ek)/2 << endl;
    return 0;
}

