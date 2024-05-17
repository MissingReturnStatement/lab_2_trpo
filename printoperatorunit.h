#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "unit.h"
#include "abstractoperatorunit.h"

class PrintOperatorUnit : public AbstractOperatorUnit
{
public:
    explicit PrintOperatorUnit(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // PRINTOPERATORUNIT_H
