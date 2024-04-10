all: test1 test2 test3 test4 test5 test6 test7 test8

# 8 tests on 8 versions of the Price class 
test1: test.cc Price1.o
	g++ -o test1 test.cc Price1.o
	
test2: test.cc Price2.o
	g++ -o test2 test.cc Price2.o

test3: test.cc Price3.o
	g++ -o test3 test.cc Price3.o

test4: test.cc Price4.o
	g++ -o test4 test.cc Price4.o

test5: test.cc Price5.o
	g++ -o test5 test.cc Price5.o

test6: test.cc Price6.o
	g++ -o test6 test.cc Price6.o

test7: test.cc Price7.o
	g++ -o test7 test.cc Price7.o

test8: test.cc Price8.o
	g++ -o test8 test.cc Price8.o


	
# do not remove the *.o files!
clean:
	rm -f test1 test2 test3 test4 test5 test6 test7 test8 
