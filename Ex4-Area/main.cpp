#include<iostream>
#include"getVolumeSurface.h"

using namespace std;

int main()
{
	double width, height, depth;
	double volume, surfaceArea;

	cout << "������͂��ĉ������B";
	cin >> width;

	cout << "��������͂��ĉ������B";
	cin >> height;

	cout << "���s����͂��ĉ������B";
	cin >> depth;

	getArea(width, height, depth, &volume, &surfaceArea);

	cout << "�̐ς�" << volume << endl<< "�\�ʐς�" << surfaceArea << endl;

	return 0;
}