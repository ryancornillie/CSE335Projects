/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: ryancornillie
 *
 * Created on February 9, 2016, 2:01 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H


class BubbleSortIncreasing: public BubbleSortTemplate{

virtual bool needSwap(SortableVector* sv, int i, int j){
       return !sv->smaller(i,j);
   }


};




#endif /* BUBBLESORTINCREASING_H */

