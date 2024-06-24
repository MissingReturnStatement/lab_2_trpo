#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "abstractclassunit.h"
#include <QObject>

class JavaClassUnit : public AbstractClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;
    JavaClassUnit(const string &name);

    void add(const shared_ptr<Unit>& unit, Flags flag) override;

    string compile(unsigned int level) const override;
};

#endif // JAVACLASSUNIT_H
