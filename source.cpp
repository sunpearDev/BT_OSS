#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		
		break;
	case '-':

		break;
	case '*':

		break;
	case '/':
		if (b==0)
			cout<<"Ko chia cho 0 dc"
		else cout<<"a/b ="<<a/b;
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}