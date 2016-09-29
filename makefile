strTest: myStr.c
	gcc myStr.c -o strTest

clean:
	rm *~

run: strTest
	./strTest
