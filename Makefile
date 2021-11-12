# Makefile for Proxy Lab 
#

CC = gcc
CFLAGS = -g -Wall -Wno-unused-variable -Wno-unused-function

all: proxy

csapp.o: csapp.c csapp.h
	$(CC) $(CFLAGS) -c csapp.c

cache.o: cache.c cache.h
	$(CC) $(CFLAGS) -c cache.c

proxy.o: proxy.c csapp.h
	$(CC) $(CFLAGS) -c proxy.c

proxy: proxy.o csapp.o cache.o
	$(CC) $(CFLAGS) proxy.o csapp.o cache.o -o proxy -lpthread

clean:
	rm -f *~ *.o proxy core *.tar *.zip *.gzip *.bzip *.gz

