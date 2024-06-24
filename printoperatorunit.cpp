#include "printoperatorunit.h"


PrintOperatorUnit::PrintOperatorUnit(const string &text)
    : AbstractOperatorUnit(text){}

string PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf(\"" + m_text+"\");\n";
}
