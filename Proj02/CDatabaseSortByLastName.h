/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabseSortByLastName.h
 * Author: TylerArmstrong
 *
 * Created on February 21, 2016, 3:17 PM
 */
#include "CDatabaseSortable.h"
#include <vector>

using namespace std;

#ifndef CDATABASESORTBYLASTNAME_H
#define CDATABASESORTBYLASTNAME_H

class CDatabaseSortByLastName: public CDatabaseSortable{
    public:
        CDatabaseSortByLastName(vector <CEmployee*>& allEmps): CDatabaseSortable(allEmps){}
        
        virtual bool smaller(int i, int j) const {
            if(getEmployee(i)->getLastName() < getEmployee(j)->getLastName())
                return true;
            else
                return false;
            
        }
        

    
};



#endif /* CDATABASESORTBYLASTNAME_H */

