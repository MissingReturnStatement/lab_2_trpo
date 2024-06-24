#ifndef ABSTRACTLANGFACTORY_H
#define ABSTRACTLANGFACTORY_H

#include "unit.h"
#include <memory>
#include <iostream>
#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractoperatorunit.h"

using std::shared_ptr;
using std::string;
using std::make_shared;
using std::vector;
using std::cout;
using std::endl;
class AbstractLangFactory
{
public:
    using Flags = unsigned int;
    AbstractLangFactory() = default;
    virtual ~AbstractLangFactory() = default;
    virtual shared_ptr<AbstractClassUnit> create_class(const string& name) = 0;
    virtual shared_ptr<AbstractMethodUnit> create_method(const string& name, const string& return_type, Flags flags) = 0;
    virtual shared_ptr<AbstractOperatorUnit> create_print_method(const string& text) = 0;
};

#endif // ABSTRACTLANGFACTORY_H
