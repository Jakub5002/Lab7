#ifndef COMPBUILD_H
#define COMPBUILD_H

#include "CaseInsetitiveLess.h"
#include "CaseSensitiveLess.h"
#include "LengthLess.h"
#include "IgonePrefixComparator.h"
#include "CompositeComparator.h"

class ComparatorBuilder {
    CaseInsensitiveLess ci;
    CaseSensitiveLess cs;
    LengthLess len;

    std::vector<IgnorePrefixComparator> wrappers;
    CompositeComparator composite;

    StringComparator* last = nullptr;

public:
    ComparatorBuilder& caseInsensitive() {
        last = &ci;
        composite.add(last);
        return *this;
    }

    ComparatorBuilder& thenCaseSensitive() {
        last = &cs;
        composite.add(last);
        return *this;
    }

    ComparatorBuilder& thenByLength() {
        last = &len;
        composite.add(last);
        return *this;
    }

    ComparatorBuilder& ignorePrefix(const std::string& p) {
        wrappers.emplace_back(*last, p);
        last = &wrappers.back();
        composite.add(last);
        return *this;
    }

    CompositeComparator build() {
        return composite;
    }
};
#endif