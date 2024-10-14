#ifndef ANALYTICSDASHBOARD_H
#define ANALYTICSDASHBOARD_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class AnalyticsDashboard {
public:
    AnalyticsDashboard();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *analyticsDisplay;
};

#endif
