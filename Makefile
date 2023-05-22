all:
	@g++ cal.cpp -o cal
	@./cal

clean:
	@rm cal