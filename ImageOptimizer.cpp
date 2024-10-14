#include "ImageOptimizer.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

ImageOptimizer::ImageOptimizer() {
    window = new Fl_Window(400, 300, "Image Optimizer");
    imageDisplay = new Fl_Text_Display(20, 20, 360, 220);
    imageDisplay->labelsize(14);
    imageDisplay->color(FL_WHITE);
    
    Fl_Button *optimizeButton = new Fl_Button(150, 250, 100, 30, "Optimize");
    optimizeButton->color(FL_LIGHT2);
    optimizeButton->labelcolor(FL_WHITE);
    optimizeButton->labelsize(16);
    optimizeButton->box(FL_ROUNDED_BOX);

    optimizeButton->callback([](Fl_Widget*, void*) {
        // Simulate image optimization
        std::string message = "Images optimized successfully.";
        std::cout << message << std::endl;
    });

    window->end();
}

void ImageOptimizer::show() {
    window->show();
}
