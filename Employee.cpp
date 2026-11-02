//
// Created by spect on 11/2/2026.
//

#include "Employee.h"

#include <iomanip>
#include <iostream>


void Employee::setEmployeeID(const int ID)
{
    employeeId = ID;
}

int Employee::getEmployeeID() const
{
    return employeeId;
}

FullTime::FullTime(const double bonus, const double salary, const int ID)
    :   bonus(bonus), salary(salary)
{
    setEmployeeID(ID);
}

double FullTime::calculatePay()
{
    pay = salary + bonus;
    return pay;
}

void FullTime::print()
{
    std::cout << "\nFull time employee ID: " << std::setfill('0') << std::setw(4) << getEmployeeID() << std::endl;
    std::cout << "Yearly pay is: " << calculatePay() << std::endl;
}

PartTime::PartTime(const int hours, const double rate, const int ID)
    :   hours(hours), rate(rate)
{
    setEmployeeID(ID);
}

double PartTime::calculatePay()
{
    pay = rate * hours;
    return pay;
}

void PartTime::print()
{
    std::cout << "\nPart time employee ID: " << std::setfill('0') << std::setw(4) << getEmployeeID() << std::endl;
    std::cout << "Weekly pay is: " << calculatePay() << std::endl;
}
