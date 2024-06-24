#include "sharpclassunit.h"

const vector<string> SharpClassUnit::ACCESS_MODIFIERS = {"public", "protected", "private", "private protected", "file", "internal", "protected internal"};

SharpClassUnit::SharpClassUnit(const string &name)
    :AbstractClassUnit(name)
{
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void SharpClassUnit::add(const shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = PRIVATE;
    if(flags < ACCESS_MODIFIERS.size()){
        accessModifier = flags;
    }else{
        qDebug("C# has no this modifier");
    }

    m_fields[accessModifier].push_back(unit);
}

string SharpClassUnit::compile(unsigned int level) const
{
    string result = generateShift(level) + "class " + m_name + " {\n";
    for(size_t i = 0;i < ACCESS_MODIFIERS.size();++i){
        if(m_fields[i].empty()){
            continue;
        }
        for(const auto& f : m_fields[i]){
            result += (ACCESS_MODIFIERS[i] + " ");
            result += f->compile(level);
        }
        result += "\n";
    }
    result += generateShift(level) + "}\n";
    return result;
}
