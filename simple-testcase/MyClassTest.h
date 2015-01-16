#ifndef MYCLASSTEST_H
#define MYCLASSTEST_H

#include <QObject>

class MyClassTest : public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

    void testHelloThere();
};

#endif // MYCLASSTEST_H
