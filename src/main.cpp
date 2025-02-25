#include <iostream>
#include <string>
#include <map>
#include <list>

/* Definition of for class information */

struct classInfo {
	std::string className;
	int credit;
	std::string letterGrade;
};

/* List of current grades/classes */

std::list<classInfo> classGradeList;

/* Map for mapping Letter grade to grade point */

std::map<std::string, float> gpm;

/* Sets up the grade point map */
void setupMap();

/* Addes a grade to the grade list */
void addToGradeList(std::string name, int credit, std::string letterGrade);

void askUserForGrade();

void printClasses();

float calculateGPA();

int main() {
	setupMap();
    
    bool runLoop = true;
    while (runLoop) {
        std::string className;
        std::cout << "Please enter the name of the class: " << std::endl;    
        std::cin >> className;
        int credit;
        std::cout << "Please enter the credit: " << std::endl;
        std:: cin >> credit;
        std::string letterGrade;
        std::cout << "Please enter the letter grade: " << std::endl;
        std:: cin >> letterGrade;
        std::cout << "Are you all done? (type \"yes\" or any other key to continue)" << std::endl;
        std::string response;
        std::cin >> response;

        addToGradeList(className, credit, letterGrade);

        if (response == "yes") {
            runLoop = false;
        }

    }
    float gpa = calculateGPA();
    std::cout << "Your GPA is: " << gpa << std::endl;

  
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

void addToGradeList(std::string name, int credit, std::string letterGrade) {
	classInfo newClass = {name, credit, letterGrade};
	classGradeList.push_back(newClass);
}

void assuserForGrade() {
	//something
}

void printClasses() {
	for (classInfo ci : classGradeList) {
		std::cout << ci.className << std::endl;
	}
}

float calculateGPA() {
	float totalCredits = 0;
	float totalGradePoints = 0.0;
	for (classInfo ci : classGradeList) {
		float gradePoint = gpm[ci.letterGrade];
		totalCredits += ci.credit; 
		totalGradePoints += ci.credit * gradePoint;
	}
	float gpa = totalGradePoints/totalCredits;
	return gpa;
}
