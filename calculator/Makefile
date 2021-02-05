src = calculator.cpp test.cpp
project = calculator
calculator: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: calculator
	./$^