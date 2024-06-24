#ifndef JAVALANGFACTORY_H
#define JAVALANGFACTORY_H

#include "abstractlangfactory.h"
#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractoperatorunit.h"

#include "Java/javaclassunit.h"
#include "Java/javamethodunit.h"
#include "Java/javaprintoperatorunit.h"

class JavaLangFactory : public AbstractLangFactory
{
public:
    using Flags = unsigned int;

    JavaLangFactory() = default;
    virtual ~JavaLangFactory() = default;

    shared_ptr<AbstractClassUnit> create_class(const string& name) override;
    shared_ptr<AbstractMethodUnit> create_method(const string &name, const string &returnType, Flags flags) override;
    shared_ptr<AbstractOperatorUnit> create_print_method(const string &text) override;
};

#endif // JAVALANGFACTORY_H
