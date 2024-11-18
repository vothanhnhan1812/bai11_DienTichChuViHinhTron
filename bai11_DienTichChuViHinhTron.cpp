#include <iostream>
using namespace std;
int main() {
	cout << "DIEN TICH VA CHU VI HINH CHU NHAT\n";
	double  bankinh, chuvi, dientich, pi;
	pi = 3.14;
	cout << " nhap ban kinh: "; cin >> bankinh;

	chuvi = 2 * pi * bankinh;
	dientich = bankinh * bankinh * bankinh;

	cout << " chu vi " << chuvi << endl;
	cout << " dien tich " << dientich << endl;
	return 0;
}
