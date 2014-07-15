
TEMPLATE = app
CONFIG += console \
    static
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    gamewindow.h

SOURCES += main.cpp \
    gamewindow.cpp

unix|win32: LIBS += -L$$PWD/../../../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3dll -lopengl32

INCLUDEPATH += $$PWD/../../../glfw-3.0.4.bin.WIN64/include
DEPENDPATH += $$PWD/../../../glfw-3.0.4.bin.WIN64/include

unix|win32: LIBS += -L$$PWD/../../../glew-1.10.0/lib/Release/x64/ -lglew32

INCLUDEPATH += $$PWD/../../../glew-1.10.0/include
DEPENDPATH += $$PWD/../../../glew-1.10.0/include

unix|win32: LIBS += -L$$PWD/../glew-1.10.0/lib/Release/x64/ -lglew32

INCLUDEPATH += $$PWD/../glew-1.10.0/include
DEPENDPATH += $$PWD/../glew-1.10.0/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3
else:unix: LIBS += -L$$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3

INCLUDEPATH += $$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120
DEPENDPATH += $$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3
else:unix: LIBS += -L$$PWD/../glfw-3.0.4.bin.WIN64/lib-msvc120/ -lglfw3

INCLUDEPATH += $$PWD/../glfw-3.0.4.bin.WIN64/include
DEPENDPATH += $$PWD/../glfw-3.0.4.bin.WIN64/include
