# makefile for shared library
hellomake: Hello.cpp Main.cpp
	g++ -Wall -fPIC -c Hello.cpp
	g++ -shared Hello.o -o ./libhello.so
	g++ Main.cpp -o Main ./libhello.so
#	# 
#	# static library:
#  # g++ -Wall -c Hello.cpp
#  # ar -cvq libhello.a Hello.o
#  # g++ Main.cpp -o Main libhello.a