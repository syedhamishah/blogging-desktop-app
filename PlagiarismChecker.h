#ifndef PLAGIARISMCHECKER_H
#define PLAGIARISMCHECKER_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class PlagiarismChecker {
public:
    PlagiarismChecker();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *plagiarismDisplay;
};

#endif
