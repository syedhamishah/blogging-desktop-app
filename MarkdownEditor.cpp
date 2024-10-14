#include "MarkdownEditor.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

MarkdownEditor::MarkdownEditor() {
    window = new Fl_Window(400, 300, "Markdown Editor");
    markdownDisplay = new Fl_Text_Display(20, 20, 360, 220);
    markdownDisplay->labelsize(14);
    markdownDisplay->color(FL_WHITE);
    
    Fl_Button *saveButton = new Fl_Button(150, 250, 100, 30, "Save");
    saveButton->color(FL_LIGHT2);
    saveButton->labelcolor(FL_WHITE);
    saveButton->labelsize(16);
    saveButton->box(FL_ROUNDED_BOX);

    saveButton->callback([](Fl_Widget*, void*) {
        // Simulate saving markdown content
        std::string message = "Markdown content saved.";
        std::cout << message << std::endl;
    });

    window->end();
}

void MarkdownEditor::show() {
    window->show();
}
