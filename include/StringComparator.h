#ifndef STRCOMP_H
#define STRCOMP_H
#include <string>
#include <iostream>


class StringComparator{
    public:
        static std::string lower_str(const std::string& lower);
        static std::string DeltePref(const std::string& str, const std::string& prefix);
        virtual bool operator()(const std::string& s1, const std::string& s2) {return false;};
        StringComparator();
        virtual ~StringComparator();
};

#endif