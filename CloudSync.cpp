#include "CloudSync.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

CloudSync::CloudSync() {
    window = new Fl_Window(400, 300, "Cloud Sync");
    syncDisplay = new Fl_Text_Display(20, 20, 360, 220);
    syncDisplay->labelsize(14);
    syncDisplay->color(FL_WHITE);
    
    Fl_Button *syncButton = new Fl_Button(150, 250, 100, 30, "Sync");
    syncButton->color(FL_LIGHT2);
    syncButton->labelcolor(FL_WHITE);
    syncButton->labelsize(16);
    syncButton->box(FL_ROUNDED_BOX);

    syncButton->callback([](Fl_Widget*, void*) {
        // Simulate cloud syncing
        std::string message = "Data synced to cloud successfully.";
        std::cout << message << std::endl;
    });

    window->end();
}

void CloudSync::show() {
    window->show();
}
