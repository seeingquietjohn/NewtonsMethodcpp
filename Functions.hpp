//
//  Functions.hpp
//  NewtonsMethodcpp
//
//  Created by Seungkyo Jeong on 8/17/25.
//

#ifndef Functions_hpp
#define Functions_hpp

#include <stdio.h>
#include <vector>

// Abstract base class for mathematical functions (including polynomials, rational maps, trig functions, etc.)
// We apply newton's method to find the roots of a well-defined real-valued & differentiable function f.
class Function {
public:
    virtual ~Function() = default;
    
    virtual double evaluate(double x) const = 0;
    virtual double evaluateDeriv(double x) const = 0;
    
    std::vector<double> newtonsMethod(double x0, double tol = 1e-10, int max_iter = 100) const;
};

struct newtonResults {
    double root;
    double iter;
    double conv;
    double finalError;
};

namespace constants {
const double INCREMENT = 1e-10;
}

#endif /* Functions_hpp */
