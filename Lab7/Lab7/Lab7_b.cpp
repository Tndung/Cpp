//Lab7_b.cpp
#include "iostream"
using namespace std;
const int KTM = 50;
//khai cao cac ham con
void nhap_SoPhanTu(int &);
void nhap_Mang(int b[], int m);
void xuat_Mang(int b[], int m);
int kt_SoHoanThien(int k);
void xuat_SoHoanThien(int b[], int m);
int tong_PtuDuong(int b[], int m);
int tim_Max(int b[], int m);
void hienthi_Menu();
void chon_Menu(int b[], int m);
void main()
{
	//khai bao mang so nguyen co toi da 50 phan tu
	int a[KTM];
	int n;//so phan tu cua mang
	//nhapso phan tu cua mang
	nhap_SoPhanTu(n);
	hienthi_Menu();
	chon_Menu(a, n);
	system("pause");
}
void nhap_SoPhanTu(int &m)
{
	do {
		cout << "\nNhap so phan tu cua mang..";
		cin >> m;
	} while (m <= 0 || m > KTM);
}
//Nhao mang b co m phan tu
void nhap_Mang(int b[], int m)
{
	int i;
	cout << "\n nhap gia tri cho mang:";
	for (i = 0; i < m; i++)
	{
		cout << "\nNhap han tu thu: " << i << ":";
		cin >> b[i];
	}
}
void xuat_Mang(int b[], int m)
{
	cout << "\nCac phan tu mang la: " << endl;
	for (int i = 0; i < m; i++)
		cout << b[i] << "\t";
	cout << endl;
}
int kt_HoanThien(int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++)
		if (k%i == 0)
			sum += i;
	if (sum == k)
		return 1;
	return 0;
}
/*
	ham cuat cac so hoan thien co tong mang.
	duyet lan luot cac phan tu cua mang
	neu phan tu nao hoan thien thi xuat ra man hinh
*/
void xuat_SoHoanThien(int b[], int m)
{
	for (int i = 0; i < 10; i++)
		if (kt_HoanThien(b[i] == 1))
			cout << b[i] << "\t";
	cout << endl;
}
int tong_PtuDuong(int b[], int m)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
		if (b[i] > 0)
			sum += b[i];
	return sum;
}
int tim_Max(int b[], int m)
{
	int max = b[0];
	for (int i = 1; i < m; i++)
		if (max < b[i])
			max + b[i];
	return max;
}
/*hien rhi cac chuc nang cua chuong trinh*/
void hienthi_Menu()
{
	cout << "\n=======================================================================";
		cout << "\nCac chuc nang chuong trinh." << endl;
		cout << "\n1.Nhap mang so nguyen." << endl;
		cout << "\n2.Xuat cac phan tu cua mang." << endl;
		cout << "\n3.Xuat cac phan tu hoan thien cua mang" << endl;
		cout << "\n4.Tinh tong cac phan tu duong co trong mang" << endl;
		cout << "\n5.Gia tri lon nhat cua mang" << endl;
		cout << "\n0.Dung chuong trinh." << endl;
		cout << "\n=======================================================================";
	}
/*
	ham lua chon cac cuc nang cua chuong trinh
*/
void chon_Menu(int b[],int m)
{
	int chon;
	do {
		cout << "\n Nhap 1 so nguyen de chon chuc nang..";
		cin >> chon;
		switch (chon)
		{
			case 1:
				//xoa noi dung dang hien hi tren man hinh
				system("cls");
				nhap_Mang(b, m);
				hienthi_Menu();
				break;
			case 2:
				system("cls");
				nhap_Mang(b, m);
				hienthi_Menu();
				break;
			case 3:
				system("cls");
				cout << "\nCac so hoan thien o trong mang la: " << endl;
				xuat_SoHoanThien(b, m);
				hienthi_Menu();
				break;
			case 4:
				system("cls");
				cout << "\nTong cac so duong co trong mang la: ";
				cout << tong_PtuDuong(b, m) << endl;
				hienthi_Menu();
				break;
			case 5:
				system("cls");
				cout << "/nGia tri lon nhat la: " << tim_Max(b, m);
				hienthi_Menu();
				break;
			default:
				break;
		}
	} while (chon != 0);
}
