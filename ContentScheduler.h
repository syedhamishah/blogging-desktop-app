#ifndef CONTENTSCHEDULER_H
#define CONTENTSCHEDULER_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class ContentScheduler {
public:
    ContentScheduler();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *scheduleDisplay;
};

#endif
