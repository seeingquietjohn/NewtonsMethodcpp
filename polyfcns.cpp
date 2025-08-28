//
//  polyfcns.cpp
//  NewtonsMethodcpp
//
//  Created by Seungkyo Jeong on 8/17/25.
//

#include "polyfcns.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>
// Newton's method for polynomials
// evalute f(x) and f'(x) for some real polynomial (with real coeffs) f
// and print f and f'

Polynomial::Polynomial(const std::vector<double>& ck) {
    if (ck.empty()) {
        throw std::invalid_argument("Empty coefficient!");
    }
    coeffs = ck; 
}

// compute f(x) using horner's method
double Polynomial::evaluate(double x) const {
    int deg = (sizeof(coeffs) / sizeof(coeffs[0])) - 1;
    double res = coeffs[0];
    for (int i = 1; i <= deg ; i++) {
        res = res * x + coeffs[i];
    }
    return res;
}

double Polynomial::evaluateDeriv(double x) const {
    double fx = evaluate(x);
    double appfx = evaluate(x + constants::INCREMENT);
    
    return ((appfx - fx) / constants::INCREMENT);
}

void Polynomial::printPolynomial() const {
    if (coeffs.empty()) {
        throw std::invalid_argument("Invalid polynomial - no coefficients");
    }
    
}
