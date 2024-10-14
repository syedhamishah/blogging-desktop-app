#include "SocialMediaIntegration.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

SocialMediaIntegration::SocialMediaIntegration() {
    window = new Fl_Window(400, 300, "Social Media Integration");
    socialMediaDisplay = new Fl_Text_Display(20, 20, 360, 220);
    socialMediaDisplay->labelsize(14);
    socialMediaDisplay->color(FL_WHITE);
    
    Fl_Button *integrateButton = new Fl_Button(150, 250, 100, 30, "Integrate");
    integrateButton->color(FL_LIGHT2);
    integrateButton->labelcolor(FL_WHITE);
    integrateButton->labelsize(16);
    integrateButton->box(FL_ROUNDED_BOX);

    integrateButton->callback([](Fl_Widget*, void*) {
        // Simulate social media integration
        std::string message = "Integrated with social media successfully.";
        std::cout << message << std::endl;
    });

    window->end();
}

void SocialMediaIntegration::show() {
    window->show();
}
