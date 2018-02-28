/*
iki diziden birinin, digerinin alt dizisi olup olmadigini kontrol etme
*/
#include <iostream>
using namespace std;

int main()
{
	int a[3]={1,2,3};
	int b[7]={3,6,8,1,2,3,0};
	
	int aboyut=3;
	int bboyut=7;
	
		for(int i=0; i<bboyut; i++)
		{
			bool esit=true;
			for(int j=0; j<aboyut; j++)
			{
				if(a[j]!=b[i+j])
				{	
					esit=false;	
					break;
				}
			}
			if(esit)
			{
				cout << "alt elemani vardir ve " << i+1 << ". elemandan baslar " << endl;
			}
		}
    return 0;
}
