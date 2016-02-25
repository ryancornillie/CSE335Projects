/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableVector.h
 * Author: ryancornillie
 *
 * Created on February 2, 2016, 1:58 PM
 */

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector {
public:
    
    //Pure Virtual functions needed for bubbleSort
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;

};

#endif /* SORTABLEVECTOR_H */

