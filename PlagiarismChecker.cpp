#include "PlagiarismChecker.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

PlagiarismChecker::PlagiarismChecker() {
    window = new Fl_Window(400, 300, "Plagiarism Checker");
    plagiarismDisplay = new Fl_Text_Display(20, 20, 360, 220);
    plagiarismDisplay->labelsize(14);
    plagiarismDisplay->color(FL_WHITE);
    
    Fl_Button *checkButton = new Fl_Button(150, 250, 100, 30, "Check");
    checkButton->color(FL_LIGHT2);
    checkButton->labelcolor(FL_WHITE);
    checkButton->labelsize(16);
    checkButton->box(FL_ROUNDED_BOX);

    checkButton->callback([](Fl_Widget*, void*) {
        // Simulate plagiarism checking
        std::string result = "No plagiarism detected.";
        std::cout << result << std::endl;
    });

    window->end();
}

void PlagiarismChecker::show() {
    window->show();
}
