main: myStr.c
	gcc myStr.c -o myStr

clean:
	rm *~

run: myStr
	./myStr
