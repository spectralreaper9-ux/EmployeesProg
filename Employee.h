//
// Created by spect on 11/2/2026.
//

#ifndef EMPLOYEES_EMPLOYEE_H
#define EMPLOYEES_EMPLOYEE_H


class Employee
{
    int employeeId = 0;

public:
    Employee() = default;

    void setEmployeeID(int ID);
    [[nodiscard]] int getEmployeeID() const;

    virtual double calculatePay() = 0;
    virtual void print() = 0;

    virtual ~Employee() = default;
};

class FullTime : public Employee
{
    double bonus = 0.0;
    double salary = 0.0;
    double pay = 0.0;

public:
    FullTime() = default;
    FullTime(double bonus, double salary, int ID);

    double calculatePay() override;
    void print() override;
};

class PartTime : public Employee
{
    int hours = 0;
    double rate = 0.0;
    double pay = 0.0;

public:
    PartTime() = default;
    PartTime(int hours, double rate, int ID);

    double calculatePay() override;
    void print() override;
};


#endif //EMPLOYEES_EMPLOYEE_H
