src = $(wildcard ./*.cpp)
obj = $(patsubst %.cpp, %.o, $(src))
target = app
CC = g++ -g -Wall -std=c++17


$(target):$(obj)
	$(CC) $(obj) -o $(target)

%.o:%.cpp
	$(CC) -c $< -o $@

.PHONY:clean
clean:
	rm -rf $(target) $(obj)