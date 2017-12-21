//
//  euclid.cpp
//  Program2
//
//  The euclid class has 3 functions. Function gcd finds the greatest common divisor between two numbers in its parameter
//  and returns the gcd from those two numbers and increments whenever the modulus oeprator is used.
//  The other functions are set and get ModOperator. Thse are used to get the number of modulus operations were used. These
//  functions are used in order to not make a global variable in the main function.
//
//  Created by Christopher Salazar on 4/17/17.
//  Copyright © 2017 Christopher Salazar. All rights reserved.
//

#include "euclid.h"
#include <iostream>

/**
 @ param A and B are integers 
 @ return greatest common divisor between two numbers
 The gcd function will go through integers A and B and will do it as long as B is not zero. It will return
 the other number if one of them is zero. If both numbers are not zero then it will do the calculations 
 and do the modulus operations.
 */
int euclid::gcd(int A, int B)  { // parameter of two integers
        while(B != 0){// as long as B is not zero the loop will continue
            if(A == 0){// if A is zero then return B
                return B;
            } else if(B == 0) {// else if B is zero then return A
                return A;
            } else if(A == 0 && B == 0) { // else if A and B are zero, just return zero
                return A;
            } else if(A != 0 && B != 0) { // else if A and B are not zero continue
                int temp = B;// assign B to a temp variable
                B = (A%B); // assign B with A divided by modulus operator and B
                A = temp; // assign A from the temp variable holding B
                mod_operator++;// increment modulus operator
            }
        }
        mod_operator--; // decrement modulus operator by one by the extra increment it does when going through while loop
        return A; // return the gcd which ends up in location A
    }

/**
 @ param is empty
 @ return variable mod_operator
 The getModOperator returns the variabel mod_operator
 */
int euclid::getModOperator() const {
    return mod_operator;
}

/**
 @ param is an int
 The setModOperator sets the number of the modulus operations
 */
void euclid::setModOperator(int Mod) {
    mod_operator = Mod;
}



