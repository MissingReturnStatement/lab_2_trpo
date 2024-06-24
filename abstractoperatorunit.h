#ifndef ABSTRACTOPERATORUNIT_H
#define ABSTRACTOPERATORUNIT_H

#include "unit.h"

class AbstractOperatorUnit : public Unit
{
public:
    AbstractOperatorUnit(const string& text);

protected:
    string m_text;
};

#endif // ABSTRACTOPERATORUNIT_H
