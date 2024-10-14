#ifndef BLOGENHANCER_H
#define BLOGENHANCER_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class BlogEnhancer {
public:
    BlogEnhancer();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *enhancementDisplay;
};

#endif
