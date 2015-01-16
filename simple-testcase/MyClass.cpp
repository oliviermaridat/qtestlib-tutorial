#include "MyClass.h"

QString MyClass::helloThere(const QString &there) const
{
    return "Hello"+(there.isEmpty() ? "" : " "+there)+"!";
}
