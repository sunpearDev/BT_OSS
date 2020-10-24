#include <iostream>
using namespace std;

int pheptoan(){
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	
	switch (phepToan)
	{
	case '+':
		cout << "Tong la" << a+b << endl;
		break;
	case '-':
		cout << "Tong la" << a-b << endl;
		break;
	case '*':
		cout << "Tong la" << a*b << endl;
		break;
	case '/':
		if (b==0)
			cout<<"Ko chia cho 0 dc"
		else cout<<"a/b ="<<a/b;
		break;
		
		
	}
}
void chuViDienTich(){
	int tinhCV;
	

	int tinhCVhcn(){
		int d,r;
		cout<<"nhap CD , CR"
		cin>> d>>r;
		return (d+r)*2;
	}
	int tinhDThcn(){
		int d,r;
		cout<<"nhap CD , CR"
		cin>> d>>r;
		return d*r;
	}
	int tinhCVhinhvuong(){
		int d;
		cout<<"nhap canh"
		cin>> d;
		return d*4;
	}
	int tinhDThinhvuong(){
	int d;
	cout<<"nhap canh"
	cin>> d;
	return d*d;
}
	
	cout<<"nhap 1 de tinh CV HCN";
	cout<<"nhap 2 de tinh DT HCN";
	cout<<"nhap 3 de tinh CV Hinh Vuong";
	cout<<"nhap 4 de tinh DT Hinh Vuong";
	
	switch (tinhCV)
	{
	case 1:
		cout << "Chu vi HCN" << tinhCVhcn() << endl;
		break;
	case 2:
		cout << "Dien tich HCN" << tinhDThcn() << endl;
		break;
	case 3:
		cout << "Chu vi HV" << tinhCVhinhvuong() << endl;
		break;
	case 4:
		cout << "Dien tich HV" << tinhDThinhvuong() << endl;
		break;	
	}
}

int main()
{
	int chon;
	cout<"1.PHEP TOAN";
	cout<<"2.CHUVVI"
	cin >> chon;
	
	switch (chon)
	{
	
	//tinh chuvi dientich
	case 1:
		pheptinh()
		break;
	case 2:
		chuViDienTich()
		break;
	
		
	default:
		cout << "Chon sai phep toan";
		break;
	
	
}