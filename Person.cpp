#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Student.h"
#include "Person.h"

Person::Person() {}

Person::Person(const Person& other) {}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone) {}

Person::~Person() {}

std::string  Person::getFirstName()
{
	return "";
}

std::string  Person::getLastName()
{
	return "";
}

struct tm    Person::getDateOfBirth()
{
	struct tm dob;
	dob.tm_mday = 0;
	dob.tm_mon = 0;
	dob.tm_year = 0;
	return dob;
} 

std::string  Person::getAddress() 
{
	return "";
}

std::string  Person::getNetID() 
{
	return "";
}

int          Person::getURID()
{
	return 0;
}

std::string  Person::getEmail()
{
	return "";
}

long         Person::getPhone()
{
	return 0;
}

void Person::setFirstName(std::string fname)
{

}

void Person::setLastName(std::string lname)
{

}

void Person::setDateOfBirth(int day, int month, int year)
{

}

void Person::setAddress(std::string address)
{

}

void Person::setNetID(std::string netid)
{

}

void Person::setURID(int urid)
{

}

void Person::setEmail(std::string email)
{

}

void Person::setPhone(long number)
{
	
}

#endif


