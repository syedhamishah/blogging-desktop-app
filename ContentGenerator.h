#ifndef CONTENTGENERATOR_H
#define CONTENTGENERATOR_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class ContentGenerator {
public:
    ContentGenerator();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *outputDisplay;
};

#endif
