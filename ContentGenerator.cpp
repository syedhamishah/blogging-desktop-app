#include "ContentGenerator.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

ContentGenerator::ContentGenerator() {
    window = new Fl_Window(400, 300, "Content Generator");
    outputDisplay = new Fl_Text_Display(20, 20, 360, 220);
    outputDisplay->labelsize(14);
    outputDisplay->color(FL_WHITE);
    
    Fl_Button *generateButton = new Fl_Button(150, 250, 100, 30, "Generate");
    generateButton->color(FL_LIGHT2);
    generateButton->labelcolor(FL_WHITE);
    generateButton->labelsize(16);
    generateButton->box(FL_ROUNDED_BOX);

    generateButton->callback([](Fl_Widget*, void*) {
        // Simulate content generation
        std::string generatedContent = "Generated content based on keywords.";
        std::cout << generatedContent << std::endl;
    });

    window->end();
}

void ContentGenerator::show() {
    window->show();
}
