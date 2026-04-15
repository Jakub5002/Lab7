#include "CaseInsetitiveLess.h"
#include <cctype>

bool CaseInsensitiveLess::operator()(const std::string& s1, const std::string& s2) {
    std::string st1 = lower_str(s1);
    std::string st2 = lower_str(s2);
    return st1 < st2;
}