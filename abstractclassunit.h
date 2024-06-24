#ifndef ABSTRACTCLASSUNIT_H
#define ABSTRACTCLASSUNIT_H

#include "unit.h"
#include <vector>

class AbstractClassUnit : public Unit
{
public:
    enum AccessModifier{
        PUBLIC,
        PROTECTED,
        PRIVATE,
        PRIVATE_PROTECTED, // c++++
        FILE, // c++++
        INTERNAL, // c++++
        PROTECTED_INTERNAL // c+++
    };

    AbstractClassUnit(const string &name);
protected:
    string m_name;
    using Fields = vector<shared_ptr<Unit>>;

    vector<Fields> m_fields;
};

#endif // ABSTRACTCLASSUNIT_H
