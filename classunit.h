#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "abstractclassunit.h"
#include <vector>
#include <QObject>

class ClassUnit : public AbstractClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;

    explicit ClassUnit(const string& name);

    void add(const shared_ptr<Unit>& unit, Flags flags) override;

    string compile(unsigned int level = 0) const override;
};


#endif // CLASSUNIT_H
