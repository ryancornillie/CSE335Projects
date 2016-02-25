/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabaseSortByHiringYear.h
 * Author: ryancornillie
 *
 * Created on February 21, 2016, 5:34 PM
 */
#include "CDatabaseSortable.h"
#include <vector>

using namespace std;

#ifndef CDATABASESORTBYHIRINGYEAR_H
#define CDATABASESORTBYHIRINGYEAR_H

class CDatabaseSortByHiringYear: public CDatabaseSortable{
    public:
        CDatabaseSortByHiringYear(vector <CEmployee*>& allEmps): CDatabaseSortable(allEmps){}
        
        virtual bool smaller(int i, int j) const {
            if(getEmployee(i)->getHiringYear() < getEmployee(j)->getHiringYear())
                return true;
            else
                return false;
            
        }
        
    
};

#endif /* CDATABASESORTBYHIRINGYEAR_H */

