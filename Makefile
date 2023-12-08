source=merge

run:	compile $(source)
	./$(sorce)
compile:	$(source).cpp
	g++ -Wall --debug  $(source).cpp -o $(source)

