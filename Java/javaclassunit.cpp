#include "javaclassunit.h"

const vector<string> JavaClassUnit::ACCESS_MODIFIERS = {"public", "protected", "private"};

JavaClassUnit::JavaClassUnit(const string &name)
    : AbstractClassUnit(name){
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void JavaClassUnit::add(const shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = PRIVATE;
    if(flags < ACCESS_MODIFIERS.size()){
        accessModifier = flags;
    }else{
        qDebug("Java has no this modifier");
    }

    m_fields[accessModifier].push_back(unit);
}

string JavaClassUnit::compile(unsigned int level) const
{
    string result = generateShift(level) + "class " + m_name + " {\n";
    for(size_t i = 0;i < ACCESS_MODIFIERS.size();++i){
        if(m_fields[i].empty()){
            continue;
        }
        result += ACCESS_MODIFIERS[i] + " ";
        for(const auto& f : m_fields[i]){
            result += f->compile(level);
        }
        result += "\n";
    }
    result += generateShift(level) + "}\n";
    return result;
}
