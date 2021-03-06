
#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main() 
{
	cout << "-----------------------------------------------------" << endl;
	cout << "Testing Student:" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "Testing setters/getters:" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "------------------------------------------------------" << endl << endl;
	Student s();
	Student s2(44444444, "vc5xa", "camp", "vincent", 10, 7, 1997, "bigG@richmond.edu", "15600 coolplalce", 4444444, 10, 7, 1998, Student::AS, true, 24);
	cout << "s2.Student::setGPA(3.6)" << endl;
	s2.Student::setGPA(3.6);
	cout << "Student GPA: " << s2.Student::getGPA() << "[Expected: 3.6]" << endl;
	cout << "------------------------------------------------------" << endl << endl;
	list<string> courses;
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

	cout << "s2.Student::setAdmitDate(10,7,2015)" << endl;
	s2.Student::setAdmitDate(10, 7, 2015);
	//Each portion of the struct must be printed out individually
	cout << "Date Admitted: " << 
	s2.Student::getAdmitDate().tm_mday  << "/" <<
	s2.Student::getAdmitDate().tm_mon  << "/" <<
	s2.Student::getAdmitDate().tm_year << "/" <<
	 " [Expected: 10/7/2015]" << endl;
	 cout << "------------------------------------------------------" << endl << endl;

	 cout << "s2.Student::setUnitsCompleted(24)" << endl;
	 s2.Student::setUnitsCompleted(24);
	 cout << "Units Completed: " << s2.Student::getUnitsCompleted() << " [Expected: 24]" << endl;
	 cout << "------------------------------------------------------" << endl << endl;

	 cout << "s2.Student::setFullTimeStatus(true)" << endl;
	 s2.Student::setFullTimeStatus(true);
	 cout << "Student is Full Time? " << s2.Student::isFullTime() << " [Expected: 1 (True)]" << endl;


	cout << "-----------------------------------------------------" << endl;
	cout << "Testing Person:" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "Testing setters/getters:" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Person p;" << endl;
	Person p;
	cout << "p.setFirstName(\"Lilly\")" << endl;
	p.setFirstName("Lilly");

	cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;
	cout << "First Name: " << p.getFirstName() << " [Expected: Lilly]" << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setLastName(\"Rose\")" << endl;
	p.setLastName("Rose");
	cout << "Last Name: " << p.getLastName() << " [Expected: Rose]" << endl;

	//Must print each portion of the struct individually - JM

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setDateOfBirth(\"4/7/1776\")" << endl;
	p.Person::setDateOfBirth(4,7,1776);
	cout << "Date of Birth: " << 
	p.Person::getDateOfBirth().tm_mday << "/" << 
	p.Person::getDateOfBirth().tm_mon << "/" <<
	p.Person::getDateOfBirth().tm_year << 
	" [Expected: 4/7/1776]" << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setAddress(\"Richmond, VA\")" << endl;
	p.setAddress("Richmond, VA");
	cout << "Address: " << p.getAddress() << " [Expected: Richmond, VA]" << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setNetID(\"jm6ms\")" << endl;
	p.setNetID("jm6ms");
	cout << "NetID: " << p.getNetID() << " [Expected: jm6ms]" << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setURID(\"87654321\")" << endl;
	p.setURID(87654321);
	cout << "URID: " << p.getURID() << " [Expected: 87654321]" << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setEmail(\"jeremiah.morton@richmond.edu\")" << endl;
	p.setEmail("jeremiah.morton@richmond.edu");
	cout << "Email: " << p.getEmail() << " [Expected: jeremiah.morton@richmond.edu]" << endl;

	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setPhone(\"6034484893\")" << endl;
	p.setPhone(6034484893);
	cout << "Phone: " << p.getPhone() << " [Expected: 6034484893]" << endl;

}

