CXX        = g++
CXXFLAGS   = -Wall  -std=c++20
DEPFLAGS   = -MMD
LDFLAGS    =
SRCS       = date.cpp main.cpp Author.cpp book.cpp Lecteur.cpp Emprunt.cpp Library.cpp
OBJS       = $(SRCS:.cpp=.o)
TARGET     = app
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)