#include "AnalyticsDashboard.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

AnalyticsDashboard::AnalyticsDashboard() {
    window = new Fl_Window(400, 300, "Analytics Dashboard");
    analyticsDisplay = new Fl_Text_Display(20, 20, 360, 220);
    analyticsDisplay->labelsize(14);
    analyticsDisplay->color(FL_WHITE);
    
    Fl_Button *viewButton = new Fl_Button(150, 250, 100, 30, "View Analytics");
    viewButton->color(FL_LIGHT2);
    viewButton->labelcolor(FL_WHITE);
    viewButton->labelsize(16);
    viewButton->box(FL_ROUNDED_BOX);

    viewButton->callback([](Fl_Widget*, void*) {
        // Simulate viewing analytics
        std::string message = "Displaying analytics data...";
        std::cout << message << std::endl;
    });

    window->end();
}

void AnalyticsDashboard::show() {
    window->show();
}
