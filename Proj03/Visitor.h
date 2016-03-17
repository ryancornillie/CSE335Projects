//
//  Visitor.h
//  CSE 335 Project 3 V1
//
//  Created by Tyler Armstrong on 3/15/16.
//  Copyright © 2016 CSE 335. All rights reserved.
//

#ifndef Visitor_h
#define Visitor_h
class Employee;
class Department;
class Group;
class Manager;

class Visitor{
public:
    virtual void VisitEmployee(Employee*) = 0;
    virtual void VisitManager(Manager*) = 0;
    virtual void VisitDepartment(Department*) = 0;
    virtual void VisitGroup(Group*) = 0;
    
};

#endif /* Visitor_h */
