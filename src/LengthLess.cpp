#include "LengthLess.h"

 bool LengthLess::operator()(const std::string& s1, const std::string& s2){
    return s1.length() < s2.length();
 }