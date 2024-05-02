#include <iostream>
#include <cmath> 

using namespace std;

int main(){
		
	setlocale(LC_ALL, "Rus");
	double length, width, perimeter, area, diagonal;
	

	while (true){
		cout << "Введите длину прямоугольника: ";
		cin >> length;
		if (length > 0)
			break;
		cout << "Введите корректное значение!" << endl;
	}
	
	while (true){
		cout << "Введите ширину прямоугольника: ";
		cin >> width;
		if (width > 0)
			break;
		cout << "Введите корректное значение!" << endl;
	}
	

	perimeter = 2 * (length + width);
	area = length * width;
	diagonal = sqrt(pow(length, 2) + pow(width, 2));

	cout << "Периметр прямоугольника: " << perimeter << endl;
	cout << "Площадь прямоугольника: " << area << endl;
	cout << "Длина диагонали прямоугольника: " << diagonal << endl;

	cout << endl;

	return 0;
}