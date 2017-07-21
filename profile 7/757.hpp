//
//  757.hpp
//  myTest
//
//  Created by lixiaoxue on 2017/7/21.
//  Copyright © 2017年 lixiaoxue. All rights reserved.
//

#ifndef _57_hpp
#define _57_hpp

#include <stdio.h>
#include <string>

class Account{
public:
    void calculate(){}
    
private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double iniRate(){return todayRate;}
};

double Account::interestRate = iniRate();

#endif /* _57_hpp */
