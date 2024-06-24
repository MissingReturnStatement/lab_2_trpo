#include "javaprintoperatorunit.h"

JavaPrintOperatorUnit::JavaPrintOperatorUnit(const string &text)
    : AbstractOperatorUnit(text){}

string JavaPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "System.out.println(\"" + m_text+"\");\n";
}
