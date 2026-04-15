#include "StringComparator.h"
#include <cctype>

std::string StringComparator::lower_str(const std::string& lower){
    std::string newStr;
    for(auto c: lower){
        newStr += tolower(c);
    }
    return newStr;
}

std::string StringComparator::DeltePref(const std::string& str, const std::string& prefix){
    std::string s_low = lower_str(str);
    std::string p_low = lower_str(prefix);

    if (s_low.rfind(p_low, 0) == 0) {
        return str.substr(prefix.length());
    }
    return str;

}

StringComparator::StringComparator(){}
StringComparator::~StringComparator(){}