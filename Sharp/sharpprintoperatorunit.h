#ifndef SHARPPRINTOPERATORUNIT_H
#define SHARPPRINTOPERATORUNIT_H

#include "abstractoperatorunit.h"

class SharpPrintOperatorUnit : public AbstractOperatorUnit
{
public:
    explicit SharpPrintOperatorUnit(const string& text);

    string compile(unsigned int level = 0) const override;
};

#endif // SHARPPRINTOPERATORUNIT_H
