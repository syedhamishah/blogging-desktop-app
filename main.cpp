#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Text_Display.H>
#include <FL/fl_draw.H>
#include "ContentGenerator.h"
#include "BlogEnhancer.h"
#include "KeywordResearch.h"
#include "SEOOptimizer.h"
#include "PlagiarismChecker.h"
#include "ContentScheduler.h"
#include "SocialMediaIntegration.h"
#include "AnalyticsDashboard.h"
#include "ImageOptimizer.h"
#include "MarkdownEditor.h"
#include "MLContentSuggestion.h"
#include "CloudSync.h"

class BloggingApp {
public:
    BloggingApp() {
        window = new Fl_Window(800, 600, "Next-Gen Blogging App");
        Fl_Menu_Bar *menu = new Fl_Menu_Bar(0, 0, 800, 30);
        menu->add("&File/Quit", FL_CTRL + 'q', (Fl_Callback*)Fl::exit);
        menu->add("&Help/About", 0, show_about);

        Fl_Box *box = new Fl_Box(20, 40, 760, 520);
        box->label("Welcome to the Blogging App");
        box->labelsize(24);
        box->labelcolor(FL_BLACK);
        box->color(FL_WHITE);

        createButtons();
        
        window->end();
    }

    void show() {
        window->show();
    }

private:
    Fl_Window *window;

    void createButtons() {
        createStyledButton("Generate Content", 100, 50, [](Fl_Widget*, void*) {
            ContentGenerator generator;
            generator.show();
        });
        createStyledButton("Enhance Blog", 100, 100, [](Fl_Widget*, void*) {
            BlogEnhancer enhancer;
            enhancer.show();
        });
        createStyledButton("Keyword Research", 100, 150, [](Fl_Widget*, void*) {
            KeywordResearch research;
            research.show();
        });
        createStyledButton("SEO Optimizer", 100, 200, [](Fl_Widget*, void*) {
            SEOOptimizer optimizer;
            optimizer.show();
        });
        createStyledButton("Plagiarism Checker", 100, 250, [](Fl_Widget*, void*) {
            PlagiarismChecker checker;
            checker.show();
        });
        createStyledButton("Content Scheduler", 100, 300, [](Fl_Widget*, void*) {
            ContentScheduler scheduler;
            scheduler.show();
        });
        createStyledButton("Analytics Dashboard", 100, 350, [](Fl_Widget*, void*) {
            AnalyticsDashboard dashboard;
            dashboard.show();
        });
        createStyledButton("Image Optimizer", 100, 400, [](Fl_Widget*, void*) {
            ImageOptimizer optimizer;
            optimizer.show();
        });
        createStyledButton("Content Suggestions", 100, 450, [](Fl_Widget*, void*) {
            MLContentSuggestion suggestion;
            suggestion.show();
        });
        createStyledButton("Cloud Sync", 100, 500, [](Fl_Widget*, void*) {
            CloudSync sync;
            sync.show();
        });
    }

    void createStyledButton(const char* label, int x, int y, Fl_Callback* cb) {
        Fl_Button *button = new Fl_Button(x, y, 200, 30, label);
        button->color(FL_LIGHT2);
        button->labelcolor(FL_WHITE);
        button->labelsize(16);
        button->box(FL_ROUNDED_BOX);
        button->callback(cb);
    }

    static void show_about(Fl_Widget*, void*) {
        fl_message("Next-Gen Blogging App\nVersion 1.0\nDesigned to enhance your blogging experience.");
    }
};

int main() {
    BloggingApp app;
    app.show();
    return Fl::run();
}
