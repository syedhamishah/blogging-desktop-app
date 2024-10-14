#ifndef KEYWORDRESEARCH_H
#define KEYWORDRESEARCH_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class KeywordResearch {
public:
    KeywordResearch();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *keywordDisplay;
};

#endif
