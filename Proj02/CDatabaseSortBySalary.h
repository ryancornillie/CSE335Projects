/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabaseSortBySalary.h
 * Author: ryancornillie
 *
 * Created on February 21, 2016, 5:14 PM
 */
#include "CDatabaseSortable.h"
#include <vector>

using namespace std;

#ifndef CDATABASESORTBYSALARY_H
#define CDATABASESORTBYSALARY_H

class CDatabaseSortBySalary: public CDatabaseSortable{
    public:
        CDatabaseSortBySalary(vector <CEmployee*>& allEmps): CDatabaseSortable(allEmps){}
        
        virtual bool smaller(int i, int j) const {
            if(getEmployee(i)->getSalary() < getEmployee(j)->getSalary())
                return true;
            else
                return false;
            
        }
        
    
};


#endif /* CDATABASESORTBYSALARY_H */

