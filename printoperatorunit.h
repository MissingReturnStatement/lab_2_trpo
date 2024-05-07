#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "unit.h"


class PrintOperatorUnit : public AbstractPrintOperatorUnit
{
public:
    explicit PrintOperatorUnit(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // PRINTOPERATORUNIT_H
