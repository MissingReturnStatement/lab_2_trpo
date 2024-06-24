QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Java/javaclassunit.cpp \
        Java/javalangfactory.cpp \
        Java/javamethodunit.cpp \
        Java/javaprintoperatorunit.cpp \
        Sharp/sharpclassunit.cpp \
        Sharp/sharplangfactory.cpp \
        Sharp/sharpmethodunit.cpp \
        Sharp/sharpprintoperatorunit.cpp \
        abstractclassunit.cpp \
        abstractlangfactory.cpp \
        abstractmethodunit.cpp \
        abstractoperatorunit.cpp \
        classunit.cpp \
        cpplangfactory.cpp \
        main.cpp \
        methodunit.cpp \
        printoperatorunit.cpp \
        unit.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Java/javaclassunit.h \
    Java/javalangfactory.h \
    Java/javamethodunit.h \
    Java/javaprintoperatorunit.h \
    Sharp/sharpclassunit.h \
    Sharp/sharplangfactory.h \
    Sharp/sharpmethodunit.h \
    Sharp/sharpprintoperatorunit.h \
    abstractclassunit.h \
    abstractlangfactory.h \
    abstractmethodunit.h \
    abstractoperatorunit.h \
    classunit.h \
    cpplangfactory.h \
    methodunit.h \
    printoperatorunit.h \
    unit.h
