//
//  743.cpp
//  myTest
//
//  Created by lixiaoxue on 2017/7/21.
//  Copyright © 2017年 lixiaoxue. All rights reserved.
//

#include <stdio.h>
#include <vector>

class NoDefault{
public:
    NoDefault(int a){}
};

class C{
public:
    NoDefault menber;
    C():menber(0){};
};

int main()
{
    C c;
    
    std::vector<C> vec(10);
    return 0;
}
