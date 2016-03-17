/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CEmployee.h
 * Author: ryancornillie
 *
 * Created on January 27, 2016, 5:55 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Unit.h"
#include "Visitor.h"
#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class Employee: public Unit {
    
protected:
    
    string m_FirstName;
    string m_LastName;
    unsigned int m_Salary;
    unsigned int m_HiringYear;
    unsigned int m_Id;
    
    
public:
    
    //Constructor
    Employee (const string firstName,
              const string lastName,
              const unsigned int salary,
              const unsigned int hiringYear, const unsigned int Id){
        
        m_FirstName = firstName;
        m_LastName = lastName;
        m_Salary = salary;
        m_HiringYear = hiringYear;
        m_Id = Id;
    }
    
    //Default Constructor
    Employee() {
        m_FirstName = "";
        m_LastName = "";
        m_Salary = 0;
        m_HiringYear = 0;
        m_Id = 0;
        
    }
    
    
    //Destructor
    virtual ~Employee(){}
    
    //Copy Constructor
    Employee(const Employee &e){
        m_FirstName = e.m_FirstName;
        m_LastName = e.m_LastName;
        m_HiringYear = e.m_HiringYear;
        m_Salary = e.m_Salary;
        m_Id  = e.m_Id;
    }
    
    //Assignment Operator
    Employee &operator=(const Employee &e){
        m_FirstName = e.m_FirstName;
        m_LastName = e.m_LastName;
        m_HiringYear = e.m_HiringYear;
        m_Salary = e.m_Salary;
        m_Id = e.m_Id;
        return *this;
    }
    


    //to make sample output.  Prints the attributes of an employee
    virtual void print() const{
        
        cout<<"                    " <<m_FirstName<<" "<<m_LastName<<"; "<<m_Salary<<"; "<<m_HiringYear<<"; "<< m_Id << endl;
        
    }
    
    //getters
    string getFirstName() const{
        
        return m_FirstName;
        
    }
    
    string getLastName() const{
        
        return m_LastName;
        
    }
    
    unsigned int getSalary() const{
        
        return m_Salary;
    }
    
    unsigned int getHiringYear() const{
        
        return m_HiringYear;
        
    }
    
    unsigned int getId() const {
        
        return m_Id;
        
    }
    
    
    //setters
    void setFirstName(const string firstName){
        
        m_FirstName = firstName;
        
    }
    
    void setLastName(const string lastName){
        
        m_LastName = lastName;
        
    }
    
    void setSalary(const unsigned int salary){
        
        m_Salary = salary;
        
    }
    
    void setHiringYear(const unsigned int hiringYear){
        
        m_HiringYear = hiringYear;
        
    }
    
    void setId(const unsigned int Id){
        
        m_Id = Id;
        
    }
    
    virtual void Accept(Visitor *v){
        v->VisitEmployee(this);
    }
    
    
};


#endif /* EMPLOYEE_H */