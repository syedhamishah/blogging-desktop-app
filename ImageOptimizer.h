#ifndef IMAGEOPTIMIZER_H
#define IMAGEOPTIMIZER_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class ImageOptimizer {
public:
    ImageOptimizer();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *imageDisplay;
};

#endif
