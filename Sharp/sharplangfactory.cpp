#include "sharplangfactory.h"

shared_ptr<AbstractClassUnit> SharpLangFactory::create_class(const string &name)
{
    return make_shared<SharpClassUnit>(name);
}

shared_ptr<AbstractMethodUnit> SharpLangFactory::create_method(const string &name, const string &returnType, Flags flags)
{
    return make_shared<SharpMethodUnit>(name, returnType, flags);
}

shared_ptr<AbstractOperatorUnit> SharpLangFactory::create_print_method(const string &text)
{
    return make_shared<SharpPrintOperatorUnit>(text);
}
