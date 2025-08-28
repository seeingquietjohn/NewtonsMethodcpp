//
//  polyfcns.hpp
//  NewtonsMethodcpp
//
//  Created by Seungkyo Jeong on 8/17/25.
//

#ifndef polyfcns_hpp
#define polyfcns_hpp

#include <stdio.h>
#include "Functions.hpp"
#include <vector>
// Newton's method for polynomials
// define the polynomial class inherited from function class

class Polynomial : public Function {
private:
    std::vector<double> coeffs; // coeffs in DESCENDING order [a_n, ..., a_0]
    
public:
    Polynomial(const std::vector<double>& coeffs);
    
    // fx and dfx evaluation function for polynomials
    double evaluate(double x) const override;
    double evaluateDeriv(double x) const override;
    
    // polynomial-specific methods
    int getDegree() const;
    double getCoeffs() const;
    void printPolynomial() const;
    void printPolyDerivative() const;
}; 

#endif /* polyfcns_hpp */
