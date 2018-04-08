
#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main() 
{
	cout << "Testing setters/getters:" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Person p;" << endl;
	Person p;
	cout << "p.setFirstName(\"Lilly\")" << endl;
	p.setFirstName("Lilly");
	cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;
}

