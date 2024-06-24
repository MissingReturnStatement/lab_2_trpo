#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "unit.h"
#include "abstractmethodunit.h"
#include <vector>


class MethodUnit : public AbstractMethodUnit
{
public:
    MethodUnit(const string& name, const string& returnType, Flags flags);

    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0) override;

    string compile(unsigned int level = 0) const override;
};

#endif // METHODUNIT_H
