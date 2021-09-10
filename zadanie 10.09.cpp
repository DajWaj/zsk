#include <iostream>

using namespace std;

class Rectangle
{
public:
	float sideA, sideB, result;
	
	void field();
	void circumference();
	void showField();
	void showCircumference();
	void showAllData();	
};

	void Rectangle::field()
	{
		result = sideA * sideB;	
		cout << result;
	};
	
	void Rectangle::circumference()
	{
		result = 2 * sideA + 2 * sideB;	
		cout << result;
	};
	
	void Rectangle::showField()
	{
		cout << "\nPole: ";
		field();	
	}; 
	
	void Rectangle::showCircumference()
	{
		cout << "\nObwód: "
		circumference();	
	};
	
	void Rectangle::showAllData()
	{
		showField();
		showCitcumference();
	};  
	
int main()
{
	Rectangle.cos;
	
	
	
	
	
	return 0;
}
	
	
