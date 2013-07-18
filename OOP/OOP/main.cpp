//
//  main.cpp
//  OOP
//
//  Created by ZHENG QIN on 3/8/12.
//  Copyright (c) 2012 NYU. All rights reserved.
//

//#pragma once
#include <string>
namespace oop {
    class pt {
        double coordinates[4];
    public:
        static const pt ORIGIN;
        pt(const double c1 = 0, const double c2 = 0,
           const double c3 = 0, const double c4 = 0);
        double get_coordinate(const int i) const;
        void set_coordinate(const int i, const double c);
        double distance(const pt& p) const;
        std::string str() const;
    }; // Do NOT forget the semicolon!!!
    std::ostream& operator<<(std::ostream& out, const pt& p);
}