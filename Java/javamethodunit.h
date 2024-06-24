#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include "abstractmethodunit.h"
#include <QObject>

class JavaMethodUnit : public AbstractMethodUnit
{
public:
    JavaMethodUnit(const string& name, const string& returnType, Flags flags);

    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0) override;

    string compile(unsigned int level = 0) const override;
};

#endif // JAVAMETHODUNIT_H
