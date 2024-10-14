CXX = g++
CXXFLAGS = -std=c++11 -Iinclude -lfltk

SRC = src/main.cpp \
      src/ContentGenerator.cpp \
      src/BlogEnhancer.cpp \
      src/KeywordResearch.cpp \
      src/SEOOptimizer.cpp \
      src/PlagiarismChecker.cpp \
      src/ContentScheduler.cpp \
      src/SocialMediaIntegration.cpp \
      src/AnalyticsDashboard.cpp \
      src/ImageOptimizer.cpp \
      src/MarkdownEditor.cpp \
      src/MLContentSuggestion.cpp \
      src/CloudSync.cpp

OBJ = $(SRC:.cpp=.o)

all: blogging_app

blogging_app: $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) blogging_app
