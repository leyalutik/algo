source=merge


run: compile
	./$(source)

compile: $(source).cpp
	g++ -Wall --debug $(source).cpp -o $(source)

clean:
	rm -rf $(source) $(source).o
