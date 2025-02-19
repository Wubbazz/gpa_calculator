#include <iostream>
#include <string>
#include <map>

/* Definition of for class information */

struct classInfo {
	std::string className;
	int credit;
	std::string letterGrade;
};

/* Map for mapping Letter grade to grade point */

std::map<std::string, float> gpm;

void setupMap();

int main() {
	setupMap();
}

void setupMap() {
	gpm["A+"] = 4.33;
	gpm["A"] = 4.00;
	gpm["A-"] = 3.67;
	gpm["B+"] = 3.33;
	gpm["B"] = 3.00;
	gpm["B-"] = 2.67;
	gpm["C+"] = 2.33;
	gpm["C"] = 2.00;
	gpm["C-"] = 1.67;
	gpm["D"] = 1.00;
	gpm["F"] = 0.00;
}
