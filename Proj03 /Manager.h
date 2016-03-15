/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CManager.h
 * Author: ryancornillie
 *
 * Created on January 27, 2016, 6:11 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

#include <vector>

using namespace std;

class Manager: public Employee {
    
protected:
    
    vector<Employee*> m_Subordinates;
    string m_Department;

public:
    
    //Constructor
    Manager(const string firstName,
             const string lastName,
             const unsigned int salary,
             const tm hiringYear,
             const string department,
             const vector<Employee*> subordinates):Employee(firstName, lastName, salary, hiringYear){
             
                 m_Subordinates = subordinates;
                 m_Department = department;
                 
             }
    
    //Default Constructor   
    Manager(): Employee(){
        vector<Employee*> emptyVec;
        m_Subordinates = emptyVec;
        m_Department = "";

    }
             
     //destructor
     virtual ~Manager(){}
          
    //Copy Constructor
   Manager(const Manager &m):Employee(m){
       m_Subordinates = m.m_Subordinates;
       m_Department = m.m_Department;
   }

    
    //Assignment Operator
   Manager &operator=(const Manager &m){
       Employee::operator=(m);
       m_Subordinates = m.m_Subordinates;
       m_Department = m.m_Department;
       return *this;
   }
     
    
    //print the manager, followed by the information of all the subordinates
    virtual void DisplayEmployee() const{
                       
        cout<<m_FirstName<<" "<<m_LastName<<"      Salary:"<<m_Salary<<"       Hiring Year:"<<m_HiringYear<<"        "<<m_Department<<"      Subordinates:"<<m_Subordinates.size()<<endl;
        
         for (int i = 0; i != m_Subordinates.size(); i++){
            cout<<"         Subordinate:";
            //stops infinite loop if manager is accidentally added as a subordinate
            if (this != m_Subordinates[i])
                m_Subordinates[i]->DisplayEmployee();
            }
        
    }
    
    //print function to match sample output.  Virtual function to be called for manager pointers
    //displays the attributes for a manager
    virtual void print() const{
        
        cout<<m_FirstName<<" "<<m_LastName<<"; "<<m_Salary<<"; "<<m_HiringYear<<"; "<<m_Department<<endl;
    
    }
    
    //getters
    vector<Employee*> getSubordinates() const{
    
        return m_Subordinates;
        
    }

    string getDepartment() const{
    
        return m_Department;
        
    }
    
     
    //setters
    void setSubordinates(const vector<Employee*> emps){
    
        m_Subordinates = emps;
        
    }
   

    void setDepartment(const string department){
    
      m_Department = department;
      
    }

};


#endif /* MANAGER_H */

