
#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main() 
{
	/*cout << "Testing setters/getters:" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Person p;" << endl;
	Person p;
	cout << "p.setFirstName(\"Lilly\")" << endl;
	p.setFirstName("Lilly");
	cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;
*/
	cout << "------------------------------------------------------" << endl << endl;
	Student s();
	Student s2(44444444, "vc5xa", "camp", "vincent", 10, 7, 1997, "bigG@richmond.edu", "15600 coolplalce", 4444444, 10, 7, 1998, Student::AS, true, 24);
	cout << "s2.Student::setGPA(3.6)" << endl;
	s2.Student::setGPA(3.6);
	cout << "Student GPA: " << s2.Student::getGPA() << "[Expected: 3.6]" << endl;
	cout << "------------------------------------------------------" << endl << endl;
	list<string> courses;
	cout<< "courses.push_back(\"English\")" << endl;
	cout<< "courses.push_back(\"Math\")" << endl;
	courses.push_back("Math");
	courses.push_back("English");
	cout << "s2.setCourses(courses)" << endl;
	s2.Student::setCourses(courses);
	cout << "s2.Student::printCourses()" << endl;
	s2.Student::printCourses();
	cout << "\t" << "[Expected: MathEnglish]" << endl << endl;
	cout << "courses.remove(\"Math\")" << endl;
	courses.remove("Math");
	cout << "s2.setCourses(courses)" << endl;
	s2.Student::setCourses(courses);
	cout << "s2.Student::printCourses()" << endl;
	s2.Student::printCourses();
	cout << "\t" << "[Expected: English]" << endl;
	cout << "courses.clear()" << endl;
	courses.clear();
	cout << "------------------------------------------------------" << endl << endl;

	cout << "s2.Student::setSchool(JSLS)" << endl;
	s2.Student::setSchool(Student::JSLS);
	cout << "Schools Attended: " << s2.Student::getSchool() << " [Expected: 1]" << endl;
	cout << "------------------------------------------------------" << endl << endl;

	cout << "s2.Student::setAdmitDate(10, 7, 2015)" << endl;
	s2.Student::setAdmitDate(10, 7, 2015);
	cout << "Date Admitted: " << endl;
	s2.Student::getAdmitDate();
	cout << " [Expected: 10, 7, 2015]" << endl;

	
}

