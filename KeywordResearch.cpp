#include "KeywordResearch.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

KeywordResearch::KeywordResearch() {
    window = new Fl_Window(400, 300, "Keyword Research");
    keywordDisplay = new Fl_Text_Display(20, 20, 360, 220);
    keywordDisplay->labelsize(14);
    keywordDisplay->color(FL_WHITE);
    
    Fl_Button *researchButton = new Fl_Button(150, 250, 100, 30, "Research");
    researchButton->color(FL_LIGHT2);
    researchButton->labelcolor(FL_WHITE);
    researchButton->labelsize(16);
    researchButton->box(FL_ROUNDED_BOX);

    researchButton->callback([](Fl_Widget*, void*) {
        // Simulate keyword research
        std::string keywords = "Keyword1, Keyword2, Keyword3";
        std::cout << "Researching keywords: " << keywords << std::endl;
    });

    window->end();
}

void KeywordResearch::show() {
    window->show();
}
