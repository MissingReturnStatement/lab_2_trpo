#ifndef SHARPCLASSUNIT_H
#define SHARPCLASSUNIT_H

#include "abstractclassunit.h"
#include <QObject>

class SharpClassUnit : public AbstractClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;

    explicit SharpClassUnit(const string &name);

    void add(const shared_ptr<Unit>& unit, Flags flags) override;

    string compile(unsigned int level = 0) const override;
};

#endif // SHARPCLASSUNIT_H
