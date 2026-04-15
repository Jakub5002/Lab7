#ifndef COMPOSITECOMPARATOR_H
#define COMPOSITECOMPARATOR_H

#include "StringComparator.h"
#include <vector>

class CompositeComparator: public StringComparator{
    public:
        void add(StringComparator* comp);
        bool operator()(const std::string& s1, const std::string& s2);
    private:
        std::vector<StringComparator*> comparators;
};

#endif