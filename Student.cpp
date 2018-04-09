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
        //returns the courses selected
        std::list<std::string> Student::getCourses()
	   {
		return Student::courses;
	   }
        //adds a course to the list of courses
        void Student::addCourse(std::string course)
        {
            Student::courses.push_back(course);
        }
        //removes a course from the list of courses
        void Student::removeCourse(std::string course)
        {
            Student::courses.remove(course);
        }
        //prints the list of courses
        void Student::printCourses()
        {
            std::cout << "Courses: " << std::endl;
            for(std::list<std::string>::const_iterator i = Student::courses.begin(); i != Student::courses.end(); ++i)
            {
                std::cout << *i;
            }
        }
        //sets the courses to be printed
        void Student::setCourses(std::list<std::string> courses)
        {
            Student::courses = courses;
        }
        //removes all courses
        void Student::clearCourses()
        {
            Student::courses.clear();
        }
        //gets the date of admittance
        struct tm Student::getAdmitDate()
        {
    	   return Student::admitDate;
        }
        //gets the School attended
        Student::School Student::getSchool()
        {
            return this->school;
        }
        //gets the student's gpa
        double Student::getGPA()
        {
            return Student::gpa;
        }
        //gets the number of units completed
        double Student::getUnitsCompleted()
        {
            return Student::unitsCompleted;
        }
        //gets the boolean of whether the student in question is full time or not
        bool Student::isFullTime()
        {
            return Student::is_full_time;
        }
        //sets the dday, month, and year of admittenace
        void Student::setAdmitDate(int day, int month, int year)
        {
            this->admitDate.tm_mday = day;
            this->admitDate.tm_mon = month;
            this->admitDate.tm_year = year;
        }
        //sets the school(s) attended
        void Student::setSchool(School school)
        {
            this->school = school;
        }
        //sets the student's gpa
        void Student::setGPA(double gpa)
        {
            Student::gpa = gpa;
        }
        //sets the number of units completed
        void Student::setUnitsCompleted(double units)
        {
            Student::unitsCompleted = units;
        }
        //sets the boolean of whether or not the student in question is full time or not
        void Student::setFullTimeStatus(bool isFullTime)
        {
            Student::is_full_time = isFullTime;
        }
#endif