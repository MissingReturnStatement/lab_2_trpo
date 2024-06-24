#ifndef CPPCODEFACTORY_H
#define CPPCODEFACTORY_H

#include "AbstractLangFactory.h"
#include "Classunit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

class CppLangFactory : public AbstractLangFactory
{

public:
    CppLangFactory() = default;
    ~CppLangFactory() = default;

    shared_ptr<AbstractClassUnit> create_class(const string& name) override;
    shared_ptr<AbstractMethodUnit> create_method(const string &name, const string &returnType, Flags flags) override;
    shared_ptr<AbstractOperatorUnit> create_print_method(const string &text) override;
};

#endif // CPPCODEFACTORY_H
