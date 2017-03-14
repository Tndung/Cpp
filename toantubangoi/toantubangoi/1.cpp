#include "iostream"
using namespace std;
void main()
{
	int n, sum = 0, i ;
	cout << "\nNhap vao so nguyen duong n >=1 ";
	cin >> n;
	if (n % 2 == 0) {
		i = 2;
		do {
			sum += i;
			i +=2;
			
		} while (i <= n);
	}
	else
	{
		i = 1;
		do {
			sum += i;
			i +=2;
			
		} while (i <= n);
	}
	cout << "\n Tong can tinh la: " << sum << endl;
	system("pause");
}
	