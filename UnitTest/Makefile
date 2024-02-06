CC = g++

CFLAGS = -Wall -Wextra -std=c++17

EXEC = TEST

LDLIBS = -lUnitTest++ -lcrypto++

SRCS = Client.cpp test.cpp md5.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
