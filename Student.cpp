#ifdef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <list>
#include <iostream>
#include "Student.h"

Student::Student() {}
Student::Student(const Student& other)
{

}
Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed)
{

}
~Student() {}
std::list<std::string> getCourses()
	{
		return null;
	}
        void                   addCourse(std::string course)
        {}
        void                   removeCourse(std::string course)
        {}
        void                   printCourses()
        {}
        void                   setCourses(std::list<std::string> courses)
        {}
        void                   clearCourses()
        {}

        struct tm              getAdmitDate()
        {admit.tm_day = 0;
        admit.tm_month = 0;
        admit.tm_year = 0;
    	return admit;}

        School                 getSchool()
        {return UNDEFINED;}
        double                 getGPA()
        {return 0;}
        double                 getUnitsCompleted()
        {return 0;}
        bool                   isFullTime()
        {return false;}

        void setAdmitDate(int day, int month, int year)
        {}
        void setSchool(School school)
        {}
        void setGPA(double gpa)
        {}
        void setUnitsCompleted(double units)
        {}
        void setFullTimeStatus(bool isFullTime)
        {}
#endif