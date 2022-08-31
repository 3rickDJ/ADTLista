# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean
CC = g++
LINKERFLAG =-02 -Wall -g

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:%.cpp=%)

all: ${BINS}

%: %.o
	@echo "Checking.."
	${CC} ${LINKERFLAG} $^ -o $@

%.o: %.c
	@echo "Creating object.."
	${CC} -c $<

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}
all:
