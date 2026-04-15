#include "CompositeComparator.h"

void CompositeComparator::add(StringComparator* comp){
    comparators.push_back(comp);
}

bool CompositeComparator::operator()(const std::string& s1, const std::string& s2){
        for (auto* c : comparators) {
            if ((*c)(s1, s2)) return true;
            if ((*c)(s2, s1)) return false;
        }
        return false;
}