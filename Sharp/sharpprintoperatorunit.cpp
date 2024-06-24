#include "sharpprintoperatorunit.h"

SharpPrintOperatorUnit::SharpPrintOperatorUnit(const string &text)
    :AbstractOperatorUnit(text){}

string SharpPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "Console.WriteLine(\"" + m_text+"\");\n";
}
