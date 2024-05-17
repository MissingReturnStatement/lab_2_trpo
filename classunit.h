#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "abstractclassunit.h"
#include <vector>
#include <QObject>

class ClassUnit : public AbstractClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;

    explicit ClassUnit(const std::string& name);

    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;

    std::string compile(unsigned int level = 0) const override;
};


#endif // CLASSUNIT_H
