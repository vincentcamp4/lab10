#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include <iostream>
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
	return this->fname;
}

std::string  Person::getLastName()
{
	return this->lname;
}

struct tm    Person::getDateOfBirth()
{
<<<<<<< HEAD
	struct tm dob;
	dob.tm_mday = this->day;
	dob.tm_mon = this->month;
	dob.tm_year = this->year;
	return dob;
=======
	return Person::dob;
>>>>>>> jm6ms
} 

std::string  Person::getAddress() 
{
	return this->address;
}

std::string  Person::getNetID() 
{
	return this->netid;
}

int Person::getURID()
{
	return this->urid;
}

std::string  Person::getEmail()
{
	return this->email;
}

long         Person::getPhone()
{
	return this->number;
}

void Person::setFirstName(std::string fname)
{
<<<<<<< HEAD
	
=======
	this->fname = fname;
>>>>>>> ea2527ad4bf4c0995e1eb7dcc4304ce3a81a3699
}

void Person::setLastName(std::string lname)
{
	this->lname = lname;
}

void Person::setDateOfBirth(int day, int month, int year)
{
<<<<<<< HEAD
	this-> day = day;
	this-> month = month;
	this-> year = year;

=======
	Person::dob.tm_mday = day;
	Person::dob.tm_mon = month;
	Person::dob.tm_year = year;
>>>>>>> jm6ms
}

void Person::setAddress(std::string address)
{
	this->address = address;
}

void Person::setNetID(std::string netid)
{
	this->netid = netid;
}

void Person::setURID(int urid)
{
	this->urid = urid;
}

void Person::setEmail(std::string email)
{
	this->email = email;
}

void Person::setPhone(long number)
{
	this->number = number;
}

#endif


