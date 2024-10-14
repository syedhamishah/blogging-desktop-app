#include "ContentScheduler.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

ContentScheduler::ContentScheduler() {
    window = new Fl_Window(400, 300, "Content Scheduler");
    scheduleDisplay = new Fl_Text_Display(20, 20, 360, 220);
    scheduleDisplay->labelsize(14);
    scheduleDisplay->color(FL_WHITE);
    
    Fl_Button *scheduleButton = new Fl_Button(150, 250, 100, 30, "Schedule");
    scheduleButton->color(FL_LIGHT2);
    scheduleButton->labelcolor(FL_WHITE);
    scheduleButton->labelsize(16);
    scheduleButton->box(FL_ROUNDED_BOX);

    scheduleButton->callback([](Fl_Widget*, void*) {
        // Simulate content scheduling
        std::string message = "Content scheduled successfully.";
        std::cout << message << std::endl;
    });

    window->end();
}

void ContentScheduler::show() {
    window->show();
}
