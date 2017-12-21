//
//  main.cpp
//  Program2
//
//  The main.cpp file has the main function that contains the loop that will go through all the i and the
//  gcd between them. It uses the euclid.cpp class to call the gcd and get the modullus operator count.
//  Created by Christopher Salazar on 4/14/17.
//  Copyright © 2017 Christopher Salazar. All rights reserved.
//
//  run in linux g++ main.cpp

#include <iostream>
#include "euclid.cpp"
using namespace std;
#include <sys/time.h>


int main() {
    

    //--------------- Variable initialization ------------------------------------------------------------
    
    struct timeval begin, end;//initialize variables to obtain the time it takes for algorithm to finish
   
    int n;//variable used for user input of number to end with gcd
    int Max = 0;//initialize the variable Max which will hold the largest modules operations
    int grabA = 0;//initialize the variable grabA to hold the integer of a in the gcd when largest modulus operator is found
    int grabB = 0;//initialize the variable grabA to hold the integer of b in the gcd when largest modulus operator is found
    int currentGCD = 0;//initialize the variable to hold the gcd between the two numbers when largest modulus operator is found
    euclid test;//create an object from class euclid to use gcd and grab the modulus operations
    int GCD = 0;//initialize variable to hold the gcd between two numbers
   
    //-------------- Beginning program -------------------------------------------------------------------
    cout<<"Please enter n: ";//asking user for input of n that the program will measure
    cin>> n;//user input greater than 8
    
    if(n < 8) {//if user input is not greater than 8, exit program.
        cout<<"Please enter only numbers greater than 8. \n";
    } else {// if n is greater or equal to 8, being loop
    
    cout<<"-----------------------------------------------------\n";
    cout<<"-----------------------------------------------------\n";
    
        gettimeofday(&begin, NULL);//begin clock of timing code

    for(int j = 8; j <= n; j++) {//loop will go from 8 to n to find gcd up to n
        
        for(int i = 1; i <= j; i++) {//loop will go through i through j and find the largest modulus operator gcd
            test.setModOperator(0);//set modulus operator to zero to begin counting modulus operations
            GCD = test.gcd(i, j);//test.gcd will return the greatest common divisor between i and j and assign it to GCD
            if(test.getModOperator() > Max) { //if ModOperator is greater than the Max assign the ModOperator as Max
                Max = test.getModOperator(); //new Max is largest modulus operations
                currentGCD = GCD;//once largest modulus operations are obtained, hold to the gcd between i and j
                grabA = i;//obtain the number i
                grabB = j;//obtain t he number j
            }
        }// exit loop measuring i to j
        
        
        
        //cout<< "Runtime of program is: " << elapsed << "ms.\n";
        gettimeofday(&end, NULL);//end clock of timing code
        double elapsed = ((end.tv_sec - begin.tv_sec) * 1000.0) + (end.tv_usec/1000.0 - begin.tv_usec/1000.0);

        
        cout<<"At i="<< j <<"; gcd("<< grabA <<","<< grabB <<") = " << currentGCD << " took "<<
        Max << " modulus operations " <<"time = " << elapsed << "ms\n"; // print out the gcd of the numbers obtained from finding the largest modulus operations

    }//end of for loop starting at i
    
    cout<<"-----------------------------------------------------\n";
    cout<<"-----------------------------------------------------\n";
   
    }//end of for loope starting at j
    
    
    
    
    return 0;// exit main.
    
    
    
    
}//end of main
