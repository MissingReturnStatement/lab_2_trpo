#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "abstractoperatorunit.h"

class JavaPrintOperatorUnit : public AbstractOperatorUnit
{
public:
    JavaPrintOperatorUnit(const string& text);

    string compile(unsigned int level = 0) const override;
};

#endif // JAVAPRINTOPERATORUNIT_H
