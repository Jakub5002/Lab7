#ifndef IGNOREPREFIXCOMPERATOR_H
#define IGNOREPREFIXCOMPERATOR_H

#include "CaseInsetitiveLess.h"
#include "StringComparator.h"

class  IgnorePrefixComparator: public StringComparator{
    public:
        IgnorePrefixComparator(StringComparator& comp, const std::string& str);
        // IgnorePrefixComparator(CaseInsensitiveLess comp, std::string& str);
        bool operator()(const std::string& s1, const std::string& s2);
    private:
        StringComparator* base;
        CaseInsensitiveLess base2;
        std::string _prefix;
};

#endif