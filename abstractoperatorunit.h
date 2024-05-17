#ifndef ABSTRACTOPERATORUNIT_H
#define ABSTRACTOPERATORUNIT_H

#include "unit.h"

class AbstractOperatorUnit : public Unit
{
public:
    AbstractOperatorUnit(const std::string& text);

protected:
    std::string m_text;
};

#endif // ABSTRACTOPERATORUNIT_H
