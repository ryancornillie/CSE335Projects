/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabase.h
 * Author: ryancornillie
 *
 * Created on January 27, 2016, 7:17 PM
 */

#ifndef CDATABASE_H
#define CDATABASE_H
#include "CEmployee.h"
#include "CManager.h"

class CDatabase {

protected:
    vector <CEmployee*> m_AllEmployees;
    
public:
    
    //Constructor
    CDatabase (vector<CEmployee*> allEmployees){
        m_AllEmployees = allEmployees;
    }
    
     //Destructor
    virtual ~CDatabase(){}
    
    //Default Constructor
    CDatabase (){
        vector<CEmployee*> emptyVector;
        m_AllEmployees = emptyVector;
    }
    
    //Copy Constructor
    CDatabase(const CDatabase &d){
        m_AllEmployees = d.m_AllEmployees;
    }
    
    //Assignment Operator
    CDatabase &operator= (const CDatabase &d){
    
        m_AllEmployees = d.m_AllEmployees;
        return *this;
    }
    
    //takes in an employee pointer and adds it to the vector of pointers
    void AddRecord(CEmployee* const newEmployee){
        
        m_AllEmployees.push_back(newEmployee);
        
    }
    
    //uses the virtual functions of CEmployee and CManager to print employees
    void DisplayRecords(){
    
        for (int i = 0; i != m_AllEmployees.size(); i++){
           m_AllEmployees[i]->DisplayEmployee();
        }

    }
    
    //print function to display each employee in the database to match sample main
    void print(){
        for(int i=0; i!= m_AllEmployees.size(); i++){
            m_AllEmployees[i]->print();
        }
    
    }
    
    //no parameters, return the vector of employee pointers
    vector<CEmployee*> getRecords() const{
    
        return m_AllEmployees;
    }
      
    /*takes in a vector of employee pointers and sets that as the new vector
     * int the database*/
    void setRecords(const vector<CEmployee*> emps){
    
        m_AllEmployees = emps;
    }    
    
   CEmployee* getEmployee(const int i) const{
       return m_AllEmployees[i];
   }
   

};


#endif /* CDATABASE_H */

