CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		assert_test.o

LIBS =

TARGET =	assert_test

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
