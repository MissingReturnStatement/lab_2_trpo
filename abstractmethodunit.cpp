#include "abstractmethodunit.h"

AbstractMethodUnit::AbstractMethodUnit(const string &name, const string &returnType, Flags flags)
{
    m_name = name;
    m_returnType = returnType;
    m_flags = flags;
}
