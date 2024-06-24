#include "CppLangFactory.h"

shared_ptr<AbstractClassUnit> CppLangFactory::create_class(const string &name)
{
    return make_shared<ClassUnit>(name);
}

shared_ptr<AbstractMethodUnit> CppLangFactory::create_method(const string &name, const string &returnType, Flags flags)
{
    return make_shared<MethodUnit>(name, returnType, flags);
}

shared_ptr<AbstractOperatorUnit> CppLangFactory::create_print_method(const string &text)
{
    return make_shared<PrintOperatorUnit>(text);
}
