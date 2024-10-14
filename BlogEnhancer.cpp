#include "BlogEnhancer.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

BlogEnhancer::BlogEnhancer() {
    window = new Fl_Window(400, 300, "Blog Enhancer");
    enhancementDisplay = new Fl_Text_Display(20, 20, 360, 220);
    enhancementDisplay->labelsize(14);
    enhancementDisplay->color(FL_WHITE);
    
    Fl_Button *enhanceButton = new Fl_Button(150, 250, 100, 30, "Enhance");
    enhanceButton->color(FL_LIGHT2);
    enhanceButton->labelcolor(FL_WHITE);
    enhanceButton->labelsize(16);
    enhanceButton->box(FL_ROUNDED_BOX);

    enhanceButton->callback([](Fl_Widget*, void*) {
        // Simulate blog enhancement
        std::string enhancedContent = "Enhanced blog content.";
        std::cout << enhancedContent << std::endl;
    });

    window->end();
}

void BlogEnhancer::show() {
    window->show();
}
