#include "MLContentSuggestion.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

MLContentSuggestion::MLContentSuggestion() {
    window = new Fl_Window(400, 300, "ML Content Suggestion");
    suggestionDisplay = new Fl_Text_Display(20, 20, 360, 220);
    suggestionDisplay->labelsize(14);
    suggestionDisplay->color(FL_WHITE);
    
    Fl_Button *suggestButton = new Fl_Button(150, 250, 100, 30, "Suggest");
    suggestButton->color(FL_LIGHT2);
    suggestButton->labelcolor(FL_WHITE);
    suggestButton->labelsize(16);
    suggestButton->box(FL_ROUNDED_BOX);

    suggestButton->callback([](Fl_Widget*, void*) {
        // Simulate ML content suggestion
        std::string suggestion = "Suggested content based on ML analysis.";
        std::cout << suggestion << std::endl;
    });

    window->end();
}

void MLContentSuggestion::show() {
    window->show();
}
