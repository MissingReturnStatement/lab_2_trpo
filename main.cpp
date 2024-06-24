#include <QCoreApplication>

#include <iostream>
#include "abstractlangfactory.h"
#include "cpplangfactory.h"
#include "Sharp/sharplangfactory.h"
#include "Java/javalangfactory.h"
#include <vector>
#include <QDebug>

string generateProgram(shared_ptr<AbstractLangFactory>& factory){
    //factory = nullptr;
    if(factory == nullptr){
        qDebug("In generateProgram, factory not initilize");
        return "";
    }

    auto method = factory->create_method( "testFunc4", "void", AbstractMethodUnit::STATIC );
    method->add(factory->create_print_method( R"(Hello, world!\n)" ) );

    shared_ptr<AbstractClassUnit> myClass = factory->create_class("MyClass");
    if(myClass != nullptr){
        myClass->add(
            factory->create_method("testFunc1", "void", 0),
            AbstractClassUnit::PRIVATE
            );
        myClass->add(
            factory->create_method("testFunc3", "void", AbstractMethodUnit::STATIC),
            AbstractClassUnit::PRIVATE
            );
        myClass->add(
            factory->create_method(
                "testFunc3",
                "void",
                AbstractMethodUnit::VIRTUAL | AbstractMethodUnit::CONST
                ),
            AbstractClassUnit::INTERNAL
            );

        myClass->add( method, AbstractClassUnit::PROTECTED );
        return myClass->compile();
    }
    return "";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<shared_ptr<AbstractLangFactory>> factories = {
        make_shared<CppLangFactory>(),
        make_shared<SharpLangFactory>(),
        make_shared<JavaLangFactory>()
    };

    for(auto& factory : factories)
        cout << generateProgram(factory) << endl;
    return a.exec();
}
