#include <iostream>
#include <cmath> 

using namespace std;

int main(){
		
	setlocale(LC_ALL, "Rus");
	double length, width, perimeter, area, diagonal;
	

	while (true){
		cout << "������� ����� ��������������: ";
		cin >> length;
		if (length > 0)
			break;
		cout << "������� ���������� ��������!" << endl;
	}
	
	while (true){
		cout << "������� ������ ��������������: ";
		cin >> width;
		if (width > 0)
			break;
		cout << "������� ���������� ��������!" << endl;
	}
	

	perimeter = 2 * (length + width);
	area = length * width;
	diagonal = sqrt(pow(length, 2) + pow(width, 2));

	cout << "�������� ��������������: " << perimeter << endl;
	cout << "������� ��������������: " << area << endl;
	cout << "����� ��������� ��������������: " << diagonal << endl;

	cout << endl;

	return 0;
}