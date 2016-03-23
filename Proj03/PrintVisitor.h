//
//  PrintVisitor.h
//  CSE 335 Project 3 V1
//
//  Created by Tyler Armstrong on 3/16/16.
//  Copyright © 2016 CSE 335. All rights reserved.
//

#ifndef PrintVisitor_h
#define PrintVisitor_h
#include "Visitor.h"
#include "Unit.h"
#include "Employee.h"
#include "Manager.h"
#include "Department.h"
#include "Group.h"


class PrintVisitor: public Visitor{
public:
    
    //employees and managers are indented 
    virtual void VisitEmployee(Employee* e){
        cout<<"                    ";
        e->print();
    }
    
    virtual void VisitManager(Manager* m){
        cout<<"                    ";
        m->print();
    }
    
    //call correct visit function for print visitor for each subDepartment
    virtual void VisitDepartment(Department* d){
        d->print();
        for (int i=0; i<d->getSubDepartments().size(); i++){
            d->getSubDepartments()[i]->Accept(this);
        }
        
    }
    
    //for each member in a group call correct visit print function
    virtual void VisitGroup(Group* g){
        g->print();
        for (int i = 0; i<g->getMembers().size() ; i++){
            g->getMembers()[i]->Accept(this);
        }
    
    }
    
};

#endif /* PrintVisitor_h */
