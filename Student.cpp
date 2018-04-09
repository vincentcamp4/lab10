#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__
#include <iostream>
#include "Student.h"

Student::Student() {}

Student::Student(const Student& other) {}

Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed)
{}
Student::~Student() 
{

}

        std::list<std::string> Student::getCourses()
	{
		return Student::courses;
	}
        void Student::addCourse(std::string course)
        {
            Student::courses.push_back(course);
        }
        void Student::removeCourse(std::string course)
        {
            Student::courses.remove(course);
        }
        void Student::printCourses()
        {
            std::cout << "Courses: " << std::endl;
            for(std::list<std::string>::const_iterator i = Student::courses.begin(); i != Student::courses.end(); ++i)
            {
                std::cout << *i;
            }
        }
        void Student::setCourses(std::list<std::string> courses)
        {
            Student::courses = courses;
        }
        void Student::clearCourses()
        {
            Student::courses.clear();
        }

        struct tm Student::getAdmitDate()
        {
    	   return Student::admitDate;
        }

        Student::School Student::getSchool()
        {
            return this->school;
        }

        double Student::getGPA()
        {
            return Student::gpa;
        }

        double Student::getUnitsCompleted()
        {
            return Student::unitsCompleted;
        }

        bool Student::isFullTime()
        {
            return Student::is_full_time;
        }

        void Student::setAdmitDate(int day, int month, int year)
        {
            this->admitDate.tm_mday = day;
            this->admitDate.tm_mon = month;
            this->admitDate.tm_year = year;
        }
        void Student::setSchool(School school)
        {
            this->school = school;
        }
        void Student::setGPA(double gpa)
        {
            Student::gpa = gpa;
        }
        void Student::setUnitsCompleted(double units)
        {
            Student::unitsCompleted = units;
        }
        void Student::setFullTimeStatus(bool isFullTime)
        {
            Student::is_full_time = isFullTime;
        }
#endif