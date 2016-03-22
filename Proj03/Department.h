//
//  Department.h
//  CSE 335 Project 3 V1
//
//  Created by Tyler Armstrong on 3/16/16.
//  Copyright © 2016 CSE 335. All rights reserved.
//

#ifndef Department_h
#define Department_h

#include "Employee.h"

#include "Unit.h"

using namespace std;

#include <vector>
#include <string>
#include <ctime>
#include <iostream>


class Department: public Unit{
protected:
    string m_DepartmentName;
    vector<Unit*> m_SubDepartments;
    
public:
    
    //Constructors
    Department(const string departmentName, const vector<Unit*> subDepartments){
        m_DepartmentName = departmentName;
        m_SubDepartments = subDepartments;
    }
    
    Department(const string departmentName){
        vector<Unit*> emptyVec;
        m_DepartmentName = departmentName;
        m_SubDepartments = emptyVec;
    }
    
    //Default Constructor
    Department(){
        vector<Unit*> emptyVec;
        m_DepartmentName = "";
        m_SubDepartments = emptyVec;
    }
    
    //Destructor
    virtual ~Department(){}
    
    //Copy Constructor
    Department(const Department &d){
        m_DepartmentName = d.m_DepartmentName;
        m_SubDepartments = d.m_SubDepartments;
    }
    
    //Assignment Operator
    Department &operator=(const Department &d){
        m_DepartmentName = d.m_DepartmentName;
        m_SubDepartments = d.m_SubDepartments;
        return *this;
    }
    
    //Getters
    
    string getDepartmentName() const{
        return m_DepartmentName;
    }
    
    vector<Unit*> getSubDepartments() const{
        return m_SubDepartments;
    }
    
    //Setters
    
    void setDepartmentName(const string departmentName){
        m_DepartmentName = departmentName;
    }
    
    void setSubDepartments(const vector<Unit*> subDepartments){
        m_SubDepartments = subDepartments;
    }
    
    virtual void Accept(Visitor *v){
        v->VisitDepartment(this);
    }
    
    void addDepartmentMember(Unit* u){
        m_SubDepartments.push_back(u);
    }
    
    virtual void print() const{
        cout << m_DepartmentName << endl;
    }
    

    
    
};


#endif /* Department_h */
