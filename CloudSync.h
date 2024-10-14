#ifndef CLOUDSYNC_H
#define CLOUDSYNC_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class CloudSync {
public:
    CloudSync();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *syncDisplay;
};

#endif
