#include <iostream>

using namespace std;

class Rectangle
{
public:
	float sideA, sideB, fResult, cResult;
	
	void field();
	void circumference();
	void showField();
	void showCircumference();
	void showAllData();	
};

	void Rectangle::field()
	{
		fResult = sideA * sideB;	
	};
	
	void Rectangle::circumference()
	{
		cResult = 2 * sideA + 2 * sideB;	
	};
	
	void Rectangle::showField()
	{
		cout << "\nPole: " << fResult << "cm";	
	}; 
	
	void Rectangle::showCircumference()
	{
		cout << "\nObwód: " << cResult << "cm";	
	};
	
	void Rectangle::showAllData()
	{
		cout << "\n\nDane:\n";
		showField();
		showCircumference();
	};  
	
int main()
{
	setlocale(LC_CTYPE, "polish");
	
	Rectangle obj;
	
	obj.sideA = 4;
	obj.sideB = 6;
	
	obj.field();
	obj.circumference();
	
	obj.showField();
	obj.showCircumference();
	
	obj.showAllData();
	
	return 0;
}
	
	
