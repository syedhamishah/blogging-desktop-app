#ifndef SOCIALMEDIAINTEGRATION_H
#define SOCIALMEDIAINTEGRATION_H

#include <FL/Fl_Window.h>
#include <FL/Fl_Text_Display.h>

class SocialMediaIntegration {
public:
    SocialMediaIntegration();
    void show();

private:
    Fl_Window *window;
    Fl_Text_Display *socialMediaDisplay;
};

#endif
