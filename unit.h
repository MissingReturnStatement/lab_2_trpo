#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <memory>
#include <stdexcept>
#include <vector>
using std::shared_ptr;
using std::string;
using std::make_shared;
using std::vector;
class Unit
{
public:
    using Flags = unsigned int;

    virtual ~Unit() = default;

    virtual void add(const shared_ptr<Unit>&, Flags = 0);

    virtual string compile(unsigned int level = 0) const = 0;
protected:
    virtual string generateShift(unsigned int level) const;
};

#endif // UNIT_H
