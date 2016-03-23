//
//  SumsalaryVisitor.h
//  
//
//  Created by Ryan Cornillie on 3/20/16.
//
//

#ifndef SumsalaryVisitor_h
#define SumsalaryVisitor_h

#include "Visitor.h"
#include "Unit.h"
#include "Employee.h"
#include "Manager.h"
#include "Department.h"
#include "Group.h"


class SumsalaryVisitor: public Visitor{

private:
    unsigned long m_TotalSalary;
    
public:
    
    //get the total salary
    unsigned long getTotalSalary() const{
        return m_TotalSalary;
    }
    
    //reset the total salary back to zero
    void restTotalSalary(){
        m_TotalSalary = 0;
    }
    
    //simply add the salary of that employee to the total
    virtual void VisitEmployee(Employee* e){
        m_TotalSalary += e->getSalary();
    }
    
    //add the salary of a manager to total
    virtual void VisitManager(Manager* m){
        m_TotalSalary += m->getSalary();
    }
    
    //for each unit of a department, use the visitor pointer
    virtual void VisitDepartment(Department* d){
        for (int i=0; i<d->getSubDepartments().size(); i++){
           d->getSubDepartments()[i]->Accept(this);
        }
    }
    
    //for each member of a group (manager or employee), add salary to total
    virtual void VisitGroup(Group* g){
        for (int i=0; i<g->getMembers().size(); i++){
            m_TotalSalary += g->getMembers()[i]->getSalary();
        }
    }
};


#endif /* SumsalaryVisitor_h */
