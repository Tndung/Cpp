////lab7_a.cpp
///*	
//	chuong trinh xay dung menu co phep
//	1. Nhap cac so nguyen.
//	2. Xuat giai tri cac phan tu mang.
//	3. Xuat cac so duong co trong mang.
//*/
//#include "iostream"
//using namespace std;
//void nhap_Mang(int b[]);
//void xuat_Mang(int b[]);
//void xuat_SoDuong(int b[]);
//void hienthi_Menu();
//void chon_Menu(int b[]);
//void main()
//{
//	//khai bao so nguyen toi da 10 phan tu
//	int a[10];
//	hienthi_Menu();
//	chon_Menu(a);
//	system("pause");
//}//main
//void nhap_Mang(int b[])
//{
//	int i; 
//	cout << "\nNhap gia tri cho mang: ";
//	for (i = 0; i < 10; i++)
//	{
//		cout << "\nNhap phan tu thu " << i << ":";
//		cin >> b[i];
//	}
//}
//void xuat_Mang(int b[])
//{
//	cout << "\nCac phan tu mang la: ";
//	for (int i = 0; i < 10; i++)
//		cout << b[i] << "\t";
//	cout << endl;
//}
///*
//	ham cuat cac so duong co trong mang.
//	suyet lan luot phan tu cua cac mang
//	neu phan tu nao la so duong thi xuat ra man hinh
//*/
//void xuat_SoDuong(int b[])
//{
//	for (int i = 0; i < 10; i++)
//		if (b[i] > 0)//kiem tra dieu kien duong
//			cout << b[i] << "/t";
//	cout << endl;
//}
///*Hien thi cac chuc nang cua chuong trinh*/
//void hienthi_Menu()
//{
//	cout << "\n=======================================================================";
//	cout << "\nCac chuc nang chuong trinh." << endl;
//	cout << "\n1.Nhap mang so nguyen." << endl;
//	cout << "\n2.Xuat cac phan tu cua mang." << endl;
//	cout << "\n3.Xuat cac phan tu duong cua mang." << endl;
//	cout << "\n0.Dung chuong trinh." << endl;
//	cout << "\n=======================================================================";
//}
///*
//	Ham lua chon chuc nang chuong trinh.
//*/
//void chon_Menu(int b[])
//{
//	int chon;
//	do {
//		cout << "\nNhap 1 so nguyen de ua chon chuc nang: ";
//		cin >> chon;
//		switch (chon)
//		{
//		case 1:
//			//xoa noi dung dang ien thi tren man hinh
//			system("cls");
//			nhap_Mang(b);
//			hienthi_Menu();
//				break;
//		case 2:
//			system("cls");
//			nhap_Mang(b);
//			hienthi_Menu();
//				break;
//		case 3:
//			system("cls");
//			cout << "\nCac so duong co trong man la: " << endl;
//			xuat_SoDuong(b);
//			hienthi_Menu();
//			break;
//		default:
//			break;
//		}
//	} while (chon != 0);
//}