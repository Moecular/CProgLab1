#include <iostream>
using namespace std;

class Circle {
public:
	Circle() {
		radius = 0.0;
	}

	Circle(double radius) {
		this->radius = radius;
	} 

	double calculateArea() {
		return PI * radius * radius;
	}

	double calculateLength() {
		return 2 * PI * radius;
	}

	void setRadius(double radius) {
		if (radius < 0.0) {
			cout << "Radius: Incorrect value!";
		}
		else {
			this->radius = radius;
		}
	}

	double getRadius() const {
		return radius;
	}

	static const double PI;


private:
	double radius;
};

const double Circle::PI = 3.1415926535897932;
 
int main() {
	double radius;
	cout << "Radius: ";
	cin >> radius;

	Circle circle;
	Circle circle1(5.3);
	circle.setRadius(radius);
	cout << "Area: " << circle.calculateArea() << endl;
	cout << "Length: " << circle.calculateLength() << endl;

	return 0;
}   