/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabaseSortByFirstName.h
 * Author: ryancornillie
 *
 * Created on February 21, 2016, 12:22 PM
 */
#include "CDatabaseSortable.h"
#include <vector>

using namespace std;

#ifndef CDATABASESORTBYFIRSTNAME_H
#define CDATABASESORTBYFIRSTNAME_H

class CDatabaseSortByFirstName: public CDatabaseSortable{
    public:
        CDatabaseSortByFirstName(vector <CEmployee*>& allEmps): CDatabaseSortable(allEmps){}
        
        virtual bool smaller(int i, int j) const {
            if(getEmployee(i)->getFirstName() < getEmployee(j)->getFirstName())
                return true;
            else
                return false;
            
        }
        

    
};

#endif /* CDATABASESORTBYFIRSTNAME_H */

