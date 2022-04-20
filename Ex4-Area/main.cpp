#include<iostream>
#include"getVolumeSurface.h"

using namespace std;

int main()
{
	double width, height, depth;
	double volume, surfaceArea;

	cout << "幅を入力して下さい。";
	cin >> width;

	cout << "高さを入力して下さい。";
	cin >> height;

	cout << "奥行を入力して下さい。";
	cin >> depth;

	getArea(width, height, depth, &volume, &surfaceArea);

	cout << "体積は" << volume << endl<< "表面積は" << surfaceArea << endl;

	return 0;
}