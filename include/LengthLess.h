#ifndef LENGTHLESS_H
#define LENGTHLESS_H
#include "StringComparator.h"

class LengthLess: public StringComparator{
    public: 
        bool operator()(const std::string& s1, const std::string& s2) override;
};
#endif