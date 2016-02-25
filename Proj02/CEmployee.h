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

#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class CEmployee {
    
protected:
    
    string m_FirstName;
    string m_LastName;
    unsigned int m_Salary;
    unsigned int m_HiringYear;
 
    
public:
    
    //Constructor
    CEmployee (const string firstName,
               const string lastName,
               const unsigned int salary,
               const tm hiringYear){
        
        m_FirstName = firstName;
        m_LastName = lastName;
        m_Salary = salary;
        m_HiringYear = hiringYear.tm_year;
  
    }
    
    //Default Constructor
    CEmployee() {
        m_FirstName = "";
        m_LastName = "";
        m_Salary = 0;
        m_HiringYear = 0;
    
    }
    
    
    //Destructor
    virtual ~CEmployee(){}
    
    //Copy Constructor 
    CEmployee(const CEmployee &e){
        m_FirstName = e.m_FirstName;
        m_LastName = e.m_LastName;
        m_HiringYear = e.m_HiringYear;
        m_Salary = e.m_Salary;
    }
    
    //Assignment Operator
    CEmployee &operator=(const CEmployee &e){
        m_FirstName = e.m_FirstName;
        m_LastName = e.m_LastName;
        m_HiringYear = e.m_HiringYear;
        m_Salary = e.m_Salary;
        return *this;
    }
    
    //Displays the data members of an employee
    virtual void DisplayEmployee() const{
    
        cout<<m_FirstName<<" "<<m_LastName<<"      "<<"Salary:"<<m_Salary<<"       "<<"Hiring Year:"<<m_HiringYear<<endl;
        
    
    }
    
    
    //to make sample output.  Prints the attributes of an employee
     virtual void print() const{
        
        cout<<m_FirstName<<" "<<m_LastName<<"; "<<m_Salary<<"; "<<m_HiringYear<<endl;
    
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
    
    void setHiringYear(const tm hiringYear){
        
        m_HiringYear = hiringYear.tm_year;
    
    }
    

};


#endif /* CEMPLOYEE_H */

