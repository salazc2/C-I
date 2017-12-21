//
//  euclid.hpp
//  Program2
//
//  The header file euclid delcares the public and private functions and variables.
//  The gcd, getModOperator, and setModOperator are all public. The only private function or variable
//  is the mod_operator variable.
//  Created by Christopher Salazar on 4/17/17.
//  Copyright © 2017 Christopher Salazar. All rights reserved.
//

#ifndef euclid_h
#define euclid_h

#include <stdio.h>

#endif /* euclid_hpp */

class euclid {
    
public:
    int gcd(int A, int B);//find the gcd between two numbers
    int getModOperator() const;//get the numebr of modulus operations
    void setModOperator(int Mod);//set the number of modulus operations

private:
    int mod_operator;// variable counting the number of modulus operations

};
