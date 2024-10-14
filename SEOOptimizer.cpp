#include "SEOOptimizer.h"
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <iostream>

SEOOptimizer::SEOOptimizer() {
    window = new Fl_Window(400, 300, "SEO Optimizer");
    seoDisplay = new Fl_Text_Display(20, 20, 360, 220);
    seoDisplay->labelsize(14);
    seoDisplay->color(FL_WHITE);
    
    Fl_Button *optimizeButton = new Fl_Button(150, 250, 100, 30, "Optimize");
    optimizeButton->color(FL_LIGHT2);
    optimizeButton->labelcolor(FL_WHITE);
    optimizeButton->labelsize(16);
    optimizeButton->box(FL_ROUNDED_BOX);

    optimizeButton->callback([](Fl_Widget*, void*) {
        // Simulate SEO optimization
        std::string optimizedContent = "Optimized blog content for SEO.";
        std::cout << optimizedContent << std::endl;
    });

    window->end();
}

void SEOOptimizer::show() {
    window->show();
}
