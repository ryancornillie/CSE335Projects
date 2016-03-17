//
//  Group.h
//  CSE 335 Project 3 V1
//
//  Created by Tyler Armstrong on 3/16/16.
//  Copyright © 2016 CSE 335. All rights reserved.
//

#ifndef Group_h
#define Group_h

#include "Employee.h"

#include "Unit.h"

using namespace std;

#include <vector>
#include <string>
#include <ctime>
#include <iostream>


class Group: public Unit{
protected:
    string m_GroupName;
    vector<Employee*>  m_Members;
    
public:
    
    //Constructors
    Group(const string groupName, const vector<Employee*> members){
        m_GroupName = groupName;
        m_Members = members;
    }
    
    Group(const string groupName){
        vector<Employee*> emptyVec;
        m_GroupName = groupName;
        m_Members = emptyVec;
    }
    
    
    //Default Constructor
    Group(){
        vector<Employee*> emptyVec;
        m_GroupName = "";
        m_Members = emptyVec;
    }
    
    //Destructor
    virtual ~Group(){}
    
    //Copy Constructor
    Group(const Group &g){
        m_GroupName = g.m_GroupName;
        m_Members = g.m_Members;
    }
    
    //Assignment Operator
    Group &operator=(const Group &g){
        m_GroupName = g.m_GroupName;
        m_Members = g.m_Members;
        return *this;
    }
    
    //Getters
    
    string getGroupName() const{
        return m_GroupName;
    }
    
    vector<Employee*> getMembers() const{
        return m_Members;
    }
    
    //Setters
    
    void setGroupName(const string groupName){
        m_GroupName = groupName;
    }
    
    void setMembers(const vector<Employee*> members){
        m_Members = members;
    }
    
    virtual void Accept(Visitor *v){
        v->VisitGroup(this);
    }
    
    void addGroupMember(Employee* g){
        m_Members.push_back(g);
    }
    
    virtual void print() const{
        
        cout << m_GroupName << endl;
        
        for (int i = 0; i<m_Members.size() ; i++){
            m_Members[i]->print();
        }
    
    }
    
    
    
};


#endif /* Group_h */
