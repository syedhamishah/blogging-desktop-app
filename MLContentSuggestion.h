#ifndef MLCONTENTSUGGESTION_H
#define MLCONTENTSUGGESTION_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class MLContentSuggestion {
public:
    MLContentSuggestion();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *suggestionDisplay;
};

#endif
