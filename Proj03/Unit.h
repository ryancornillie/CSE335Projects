//
//  Unit.h
//  CSE 335 Project 3 V1
//
//  Created by Tyler Armstrong on 3/3/16.
//  Copyright © 2016 CSE 335. All rights reserved.
//

#ifndef Unit_h
#define Unit_h
#include <string>

class Unit{
public:
    
   virtual void print() const = 0;
   
   /*pure virtual Accept function must be implemented 
   in order to work with visitor pattern*/
   virtual void Accept(class Visitor*) = 0;
    
};

#endif /* Unit_h */
