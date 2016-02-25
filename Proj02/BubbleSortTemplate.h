/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortTemplate.h
 * Author: ryancornillie
 *
 * Created on February 9, 2016, 1:50 PM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

#include "SortableVector.h"

class BubbleSortTemplate{
public:
    void sort(SortableVector* sortableVector){
         bool sorted = false;
        int n = sortableVector->getSize();
        while (!sorted){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(sortableVector,i-1, i)){
                    sortableVector->swap(i-1, i);
                    sorted = false;
                }
            }
            
            n--;
            
        }
        
    }
    
    //template method. Allows for increase and decreasing sort
    virtual bool needSwap(SortableVector* sortableVector, int i, int j) =0;


};



#endif /* BUBBLESORTTEMPLATE_H */

