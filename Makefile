run : Driver_CMP.o Complex_Mul.o
	g++ Driver_CMP.o Complex_Mul.o -o run

Driver_CMP.o: Driver_CMP.cpp
	g++ -c Driver_CMP.cpp

Complex_Mul.o: Complex_Mul.cpp
	g++ -c Complex_Mul.cpp

clean :
	rm *.o run