#ifndef SHARPLANGFACTORY_H
#define SHARPLANGFACTORY_H

#include "abstractlangfactory.h"
#include "sharpclassunit.h"
#include "sharpmethodunit.h"
#include "sharpprintoperatorunit.h"

class SharpLangFactory : public AbstractLangFactory
{
public:
    SharpLangFactory() = default;
    ~SharpLangFactory() = default;

    shared_ptr<AbstractClassUnit> create_class(const string& name) override;
    shared_ptr<AbstractMethodUnit> create_method(const string &name, const string &returnType, Flags flags) override;
    shared_ptr<AbstractOperatorUnit> create_print_method(const string &text) override;
};

#endif // SHARPCODEFACTORY_H
