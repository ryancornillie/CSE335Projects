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
    virtual void VisitEmployee(Employee* e){
        e->print();
    }
    
    virtual void VisitManager(Manager* m){
        m->print();
    }
    
    virtual void VisitDeparment(Department* d){
        d->print();
    }
    
    virtual void VisitGroup(Group* g){
        g->print();
    }
};

#endif /* PrintVisitor_h */
