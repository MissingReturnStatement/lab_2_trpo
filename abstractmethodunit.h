#ifndef ABSTRACTMETHODUNIT_H
#define ABSTRACTMETHODUNIT_H

#include "unit.h"
#include <vector>

class AbstractMethodUnit : public Unit
{
public:
    enum Modifier{
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3,
        ABSTRACT = 1 << 4,
    };

    AbstractMethodUnit(const string& name, const string& returnType, Flags flags);
protected:
    string m_name;
    string m_returnType;
    Flags m_flags;
    vector<shared_ptr<Unit>> m_body;
};

#endif // ABSTRACTMETHODUNIT_H
