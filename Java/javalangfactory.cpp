#include "javalangfactory.h"

shared_ptr<AbstractClassUnit> JavaLangFactory::create_class(const string &name)
{
    return make_shared<JavaClassUnit>(name);
}

shared_ptr<AbstractMethodUnit> JavaLangFactory::create_method(const string &name, const string &returnType, Flags flags)
{
    return make_shared<JavaMethodUnit>(name, returnType, flags);
}

shared_ptr<AbstractOperatorUnit> JavaLangFactory::create_print_method(const string &text)
{
    return make_shared<JavaPrintOperatorUnit>(text);
}
