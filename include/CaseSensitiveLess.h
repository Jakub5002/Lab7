#ifndef CASESENISTIVE_H
#define CASESENISTIVE_H

#include "StringComparator.h"
class CaseSensitiveLess: public StringComparator{
    public:
        bool operator()(const std::string& s1, const std::string& s2) override;
};

#endif