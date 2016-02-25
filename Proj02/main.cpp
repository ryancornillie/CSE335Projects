/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ryancornillie
 *
 * Created on January 27, 2016, 5:37 PM
 */

#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

#include "CEmployee.h"
#include "CManager.h"
#include "CDatabase.h"


#include "SortableVector.h"
#include "BubbleSortTemplate.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "CDatabaseSortable.h"
#include "CDatabaseSortByFirstName.h"
#include "CDatabaseSortByLastName.h"
#include "CDatabaseSortByHiringYear.h"
#include "CDatabaseSortBySalary.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    tm hiringYear;
    vector<CEmployee*> allEmps;
    
    vector<CEmployee*>emps1, emps2;
    emps1.push_back(new CEmployee("John", "Smith", 10000, hiringYear));
    emps2.push_back(new CEmployee("John", "Doe", 15000, hiringYear));
    
    
    //build vector of employee and managers
    hiringYear.tm_year = 2011;
    allEmps.push_back(new CEmployee("John", "Smith", 10000, hiringYear));
    hiringYear.tm_year = 2012;
    allEmps.push_back(new CEmployee("John", "Smith2", 20000, hiringYear));
    hiringYear.tm_year = 2013;
    allEmps.push_back(new CEmployee("John", "Smith3", 30000, hiringYear));
    hiringYear.tm_year = 2000;
    allEmps.push_back(new CManager("Tom", "Cruise", 40000, hiringYear,"Sales", emps1));
    
   
    
    hiringYear.tm_year = 2010;
    allEmps.push_back(new CEmployee("John", "Doe", 15000, hiringYear));
    hiringYear.tm_year = 2011;
    allEmps.push_back(new CEmployee("John", "Doe2", 25000, hiringYear));
    hiringYear.tm_year = 2012;
    allEmps.push_back(new CEmployee("John", "Doe3", 35000, hiringYear));
    hiringYear.tm_year = 2000;
    allEmps.push_back(new CManager("Alice", "Cooper", 45000, hiringYear,"Human Resources", emps2));
    
    
       
    BubbleSortIncreasing bsInc;
    BubbleSortDecreasing bsDec;
    
    cout<<"*****************************Before Sorting"<<endl;
    CDatabase DBbeforeSort(allEmps);
    DBbeforeSort.print();

    cout<<"*****************************After Sorting by FirstName Alphabetical"<<endl;
    CDatabaseSortByFirstName DBSortedByFirstName(allEmps);
    bsInc.sort(&DBSortedByFirstName);
    DBSortedByFirstName.print();
    
    cout<<"*****************************After Sorting by FirstName Reverse Alphabetical"<<endl;
    CDatabaseSortByFirstName DBSortedByFirstNameReverse(allEmps);
    bsDec.sort(&DBSortedByFirstNameReverse);
    DBSortedByFirstNameReverse.print();
  
    cout<<"*****************************After Sorting by Last Name Alphabetical"<<endl;
    CDatabaseSortByLastName DBSortedByLastName(allEmps);
    bsInc.sort(&DBSortedByLastName);
    DBSortedByLastName.print();
    
    cout<<"*****************************After Sorting by Last Name Reverse Alphabetical"<<endl;
    CDatabaseSortByLastName DBSortedByLastNameReverse(allEmps);
    bsDec.sort(&DBSortedByLastNameReverse);
    DBSortedByLastNameReverse.print();
    
    cout<<"*****************************After Sorting by Salary Increasing"<<endl;
    CDatabaseSortBySalary DBSortedBySalary(allEmps);
    bsInc.sort(&DBSortedBySalary);
    DBSortedBySalary.print();
    
    cout<<"*****************************After Sorting by Salary Decreasing"<<endl;
    CDatabaseSortBySalary DBSortedBySalaryDec(allEmps);
    bsDec.sort(&DBSortedBySalary);
    DBSortedBySalaryDec.print();
    
    cout<<"*****************************After Sorting by HiringYear Increasing"<<endl;
    CDatabaseSortByHiringYear DBSortedByHiringYear(allEmps);
    bsInc.sort(&DBSortedByHiringYear);
    DBSortedByHiringYear.print();
    
    cout<<"*****************************After Sorting by HiringYear Decreasing"<<endl;
    CDatabaseSortByHiringYear DBSortedByHiringYearDec(allEmps);
    bsDec.sort(&DBSortedByHiringYearDec);
    DBSortedByHiringYearDec.print();
  
  
    
    return 0;
}