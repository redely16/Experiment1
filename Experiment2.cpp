#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{ 

	cout << "Find the Volume of the Object";
	cout << "  " << endl; 

	int mass;
	cout << "Mass:   " << "    " ;
	cin >> mass;
	cout << mass << "  " << "grams" << endl;

	int density;
	cout << "Density:   " << "   " ;
	cin >> density;
	cout << density << "  " << "grams per cubic centimeters" << endl;


	double volume;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Volume:  " << "   " << 0.25 * mass / density << "  " <<"cubic centimeters" << endl;



_getch ();
return 0;
}
