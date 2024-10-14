#ifndef SEOOPTIMIZER_H
#define SEOOPTIMIZER_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class SEOOptimizer {
public:
    SEOOptimizer();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *seoDisplay;
};

#endif
