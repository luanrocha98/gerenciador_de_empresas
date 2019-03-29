#Makefile for "imd0030" C++ application
#Created by Silvio Sampaio 10/08/2016

PROG = gerenciador_empresas
CC = g++
CPPFLAGS = -O0 -g -Wall -std=c++11 
OBJS = main.o funcionario.o empresa.o date.o


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o :
	$(CC) $(CPPFLAGS) -c main.cpp

empresa.o : empresa.h
	$(CC) $(CPPFLAGS) -c empresa.cpp

funcionario.o : funcionario.h
	$(CC) $(CPPFLAGS) -c funcionario.cpp

date.o : date.h
	$(CC) $(CPPFLAGS) -c date.cpp











