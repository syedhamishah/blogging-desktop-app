#ifndef MARKDOWNEDITOR_H
#define MARKDOWNEDITOR_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class MarkdownEditor {
public:
    MarkdownEditor();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *markdownDisplay;
};

#endif
