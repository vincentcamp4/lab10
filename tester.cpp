#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main() 
{
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