#include "MyClassTest.h"

#include <QDebug>
#include <QTest>

#include "MyClass.h"

void MyClassTest::initTestCase()
{
    qDebug()<<"Test is starting";
}

void MyClassTest::cleanupTestCase()
{
    qDebug()<<"Test is finished";
}

void MyClassTest::init()
{
    qDebug()<<"init";
}

void MyClassTest::cleanup()
{
    qDebug()<<"cleanup";
}

void MyClassTest::testHelloThere()
{
    MyClass myClass;
    QVERIFY("Hello!" == myClass.helloThere());
    QVERIFY2("Hello Martin!" == myClass.helloThere("Martin"), "Martin should have been saluted...");
    QCOMPARE(myClass.helloThere("Riggs"), QStringLiteral("Hello Riggs!"));
}
