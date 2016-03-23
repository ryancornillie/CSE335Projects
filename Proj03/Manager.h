
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
    
    unsigned int m_Rank;
    
public:
    
    //Constructor
    Manager(const string firstName,
            const string lastName,
            const unsigned int salary,
            const unsigned int hiringYear,
            const unsigned int Id,
            const unsigned int rank):Employee(firstName, lastName, salary, hiringYear, Id){
        
        m_Rank = rank;
        
    }
    
    //Default Constructor
    Manager(): Employee(){
        m_Rank = 0;
        
    }
    
    //destructor
    virtual ~Manager(){}
    
    //Copy Constructor
    Manager(const Manager &m):Employee(m){
        m_Rank = m.m_Rank;
    }
    
    
    //Assignment Operator
    Manager &operator=(const Manager &m){
        Employee::operator=(m);
        m_Rank = m.m_Rank;
        return *this;
    }
    
    
    //Virtual function to be called for manager pointers
    //displays the attributes for a manager
    virtual void print() const{
        
       cout<<m_FirstName<<" "<<m_LastName<<"; "<<m_Salary<<"; "<<m_HiringYear<<"; " << m_Id <<"; " << m_Rank << endl;
        
    }
    
    //getters
    unsigned int getRank() const{
        
        return m_Rank;
        
    }
    
    
    //setters
    void setRank(const unsigned int rank){
        
        m_Rank = rank;
        
    }
    
    virtual void Accept(Visitor *v){
        v->VisitManager(this);
    }
    
    
    
    
    
};


#endif /* MANAGER_H */

