/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabaseSortable.h
 * Author: ryancornillie
 *
 * Created on February 21, 2016, 12:12 PM
 */

#include "SortableVector.h"
#include <vector>

using namespace std;

#ifndef CDATABASESORTABLE_H
#define CDATABASESORTABLE_H

/**
 * Adapter.  Inherits from both SortableVector interface and the CDatabase class
 * swap and getSize are implemented here, smaller pure virtual function defined in 
 * derived classes depending on the sort key
 */
class CDatabaseSortable: public SortableVector, public CDatabase{
public:
    CDatabaseSortable (vector<CEmployee*> allEmp): CDatabase(allEmp){}

    virtual unsigned int getSize() const{
        return m_AllEmployees.size();
    }

    virtual void swap(int i, int j){
        CEmployee* temp = m_AllEmployees[i];
        m_AllEmployees[i] = m_AllEmployees[j];
        m_AllEmployees[j] = temp;
    }
};


#endif /* CDATABASESORTABLE_H */

