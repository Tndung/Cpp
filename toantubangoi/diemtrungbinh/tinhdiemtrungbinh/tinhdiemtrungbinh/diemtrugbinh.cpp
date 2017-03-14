#include "iostream"
#include "string"
using namespace std;
void main()
{
	float toan, ly, hoa;
	cout << "/n nhap vao diem 3 mon toan ly hoa ";
	cin >> toan >> ly >> hoa;
	float dtb = (toan * 2 + ly + hoa) / 4;
	
	cout << "/n diem trung binh: "<<dtb << endl;
	string ketqua = (dtb < 5) ? "rot" : "dau" ;
	cout << "/n Ket qua la: " <<ketqua<<endl; 
	system("pause");
}
