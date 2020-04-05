#include <iostream>

using namespace std;
int main ()
{
	int jari;
	float luas, keliling;
	cout<<"input jari-jari lingkaran"<<endl;
	cin>>jari;
	
	luas = 3.14*jari*jari;
	keliling = 2*3.14*jari;
	
	cout<<"\nLuas dan Keliling Lingkaran";
	cout<<"\nJari-Jari	=" <<jari;
	cout<<"\nLuas		=" <<luas;
	cout<<"\nKeliling	=" <<keliling;
	
	return 0;
}
