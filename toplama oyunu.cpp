/*toplama oyunu
kullanicidan 5 sayi alin. bunlardan 4 tanesi ile uretilebilecek
en buyuk ve en kucuk degerleri ekrana yazdirin.
*/
#include <iostream>
using namespace std;

int main()
{
	int a[5];
	cout << "5 adet sayi giriniz: ";
	for(int i=0; i<5; i++)
	{
		cin >> a[i];
	}
	//4 elemanýn toplam max(en küçüðü bul toplamdan çýkar)
	int enk=a[0];
	int enb=a[0];
	for(int i=0; i<5; i++)//en küçüðü/en büyüðü bulma
	{
		if(enk>a[i])
			enk=a[i];
		if(enb<a[i])
			enb=a[i];
	}
	
	int toplam=0;
	for(int i=0; i<5; i++)
	{
		toplam+=a[i];
	}
	cout << "Maks: " << toplam-enk << endl;
	cout << "Min: " << toplam-enb << endl;
	

    return 0;
}

