
#include "IgonePrefixComparator.h"
#include "StringComparator.h"
#include <string>

IgnorePrefixComparator::IgnorePrefixComparator(StringComparator& comp, const std::string& str): base(&comp), _prefix(str) {}
// IgnorePrefixComparator::IgnorePrefixComparator(CaseInsensitiveLess comp, const std::string& str): base2(comp), _prefix(str) {}


bool IgnorePrefixComparator::operator()(const std::string& s1, const std::string& s2) {
    std::string newS1 = StringComparator::DeltePref(s1, _prefix);
    std::string newS2 = StringComparator::DeltePref(s2,_prefix);
    return base -> operator()(newS1, newS2);
}

