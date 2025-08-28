//
//  Functions.cpp
//  NewtonsMethodcpp
//
//  Created by Seungkyo Jeong on 8/17/25.
//

#include "Functions.hpp"
#include <cmath>
#include <stdexcept>

std::vector<double> Function::newtonsMethod(double x0, double tol, int max_iter) const {
    std::vector<double> newtonSeq;
    double x = x0;
    newtonSeq.push_back(x);
    
    for (int i = 0; i < max_iter; i++) {
        double fx = evaluate(x);
        double dfx = evaluateDeriv(x);
        // make sure derivative is nonzero
        if (dfx == 0) {
            throw std::runtime_error("Derivative must be nonzero...");
        }
        
        double x1 = x - (fx / dfx);
        newtonSeq.push_back(x1);
        
        if (std::abs(x-x1) <= tol) {
            return newtonSeq;
        }
        
        x = x1;
    }
    throw std::runtime_error("Newton's method did not converge...");
}




