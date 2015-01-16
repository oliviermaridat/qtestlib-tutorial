#include <QDebug>
#include <QTest>

#include "MyClassTest.h"

int main(int argc, char **argv)
{
    MyClassTest testCase;
    int testCaseResult = QTest::qExec(&testCase, argc, argv);
    qDebug()<<"MyClassTest: "<<(0 == testCaseResult ? "Success" : "Faillure");
    return testCaseResult;
}
