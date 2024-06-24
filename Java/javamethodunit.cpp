#include "javamethodunit.h"

JavaMethodUnit::JavaMethodUnit(const string &name, const string &returnType, Flags flags)
    :AbstractMethodUnit(name, returnType, flags){}

void JavaMethodUnit::add(const shared_ptr<Unit> &unit, Flags)
{
    m_body.push_back(unit);
}

string JavaMethodUnit::compile(unsigned int level) const
{
    string result = generateShift(level);
    if(m_flags & STATIC){
        result += "static ";
    }else if(m_flags & ABSTRACT){
        result += "abstract ";
        result += (m_returnType + "();");
        return result;
    }else if(m_flags & FINAL){
        result += "final ";
    }
    result += m_returnType + " ";
    result += m_name + " () ";
    if(m_flags & CONST){
        qDebug("Java has no const modifier");
    }
    result += " {\n";
    for(const auto& b : m_body){
        result += b->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
