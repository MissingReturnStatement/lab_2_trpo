#ifndef SHARPMETHODUNIT_H
#define SHARPMETHODUNIT_H

#include "abstractmethodunit.h"
#include <QObject>

class SharpMethodUnit : public AbstractMethodUnit
{
public:
    SharpMethodUnit(const string& name, const string& returnType, Flags flags);

    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0) override;

    string compile(unsigned int level = 0) const override;
};

#endif // SHARPMETHODUNIT_H
