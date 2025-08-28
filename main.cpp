//
//  main.cpp
//  NewtonsMethodcpp
//
//  Created by Seungkyo Jeong on 8/17/25.
//

#include <iostream>
#include <vector>
#include "Functions.hpp"
#include "polyfcns.hpp"

int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    std::cout << "abcdefg!" << std::endl;
//    std::cout << -4.9 << std::endl;
//    // std::cout << "\n";
//    
//    int x{};
//    int y{};
//    std::cin >> x >> y;
//    std::cout << "You entered " << x << " and " << y << '\n';
//    
//    std::cout << sizeof(x) << sizeof(y) << '\n';
    
    std::vector<double> c1 = {1.0, 0.0, -16.0};
    std::cout << sizeof(c1) / sizeof(c1[0]) <<"\n";
    Polynomial poly1(c1);
    double y = 1.0;
    
    double fx = poly1.evaluate(y);
    double dfx = poly1.evaluateDeriv(y);
    
    std::cout << fx << "\n" << dfx << "\n";
    
    std::vector<double> newtOut = poly1.newtonsMethod(y);
    

    for (double v : newtOut) {
        std::cout << v << " ";
    }
    std::cout << "\n"; 
    
    return 0;
}
