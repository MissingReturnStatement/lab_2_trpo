#include "printoperatorunit.h"


PrintOperatorUnit::PrintOperatorUnit(const std::string &text)
    : AbstractOperatorUnit(text){}

std::string PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf(\"" + m_text+"\");\n";
}
