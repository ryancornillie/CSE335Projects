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

#ifndef CMANAGER_H
#define CMANAGER_H

#include "CEmployee.h"

class CManager: public CEmployee {
    
protected:
    
    vector<CEmployee*> m_Subordinates;
    string m_Department;

public:
    
    //Constructor
    CManager(const string firstName,
             const string lastName,
             const unsigned int salary,
             const tm hiringYear,
             const string department,
             const vector<CEmployee*> subordinates):CEmployee(firstName, lastName, salary, hiringYear){
             
                 m_Subordinates = subordinates;
                 m_Department = department;
                 
             }
    
    //Default Constructor   
    CManager(): CEmployee(){
        vector<CEmployee*> emptyVec;
        m_Subordinates = emptyVec;
        m_Department = "";

    }
             
     //destructor
     virtual ~CManager(){}
          
    //Copy Constructor
   CManager(const CManager &m):CEmployee(m){
       m_Subordinates = m.m_Subordinates;
       m_Department = m.m_Department;
   }

    
    //Assignment Operator
   CManager &operator=(const CManager &m){
       CEmployee::operator=(m);
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
    vector<CEmployee*> getSubordinates() const{
    
        return m_Subordinates;
        
    }

    string getDepartment() const{
    
        return m_Department;
        
    }
    
     
    //setters
    void setSubordinates(const vector<CEmployee*> emps){
    
        m_Subordinates = emps;
        
    }
   

    void setDepartment(const string department){
    
      m_Department = department;
      
    }

};


#endif /* CMANAGER_H */

