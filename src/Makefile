CFLAGS = -c -Wall -Wextra -Werror -std=c11

all: install

3dviewer.o:
	gcc ${CFLAGS} ./C_Backend/*.c

3dviewer.a: 3dviewer.o
	ar rcs 3dviewer.a *.o

tests: 3dviewer.a test/test.c
	gcc -g -fsanitize=address -Werror -Wextra -Wall -std=c11  test/*.c 3dviewer.a -lcheck -o test_exec --coverage
	./test_exec

clean:
	rm -rf *.o *.a *.g* test_exec ./test_exec.dSYM *.info

gcov_report: clean 3dviewer.a
	gcc -Werror -Wextra -Wall -std=c11 ./C_Backend/*.c ./test/*.c -lcheck 3dviewer.a -o test_exec --coverage
	./test_exec
	lcov -t "gcov_report" -o gcov_report.info -c -d .
	genhtml -o report gcov_report.info
	open ./report/index.html
	rm -rf *.o *.gcda *.gcno
	rm -rf report

install:
	mkdir build
	cd QT/3D_Viewer_v1 && qmake && make && make clean && rm Makefile
	mv QT/3D_Viewer_v1/3D_Viewer_v1.app ./build

uninstall:
	rm -rf build
	cd QT/3D_Viewer_v1/ && rm -rf 3D_Viewer_v1.app .qmake.stash

dist: uninstall install
	tar -cvzf ./build/3D_Viewer_v1.tar.gz ./build/3D_Viewer_v1.app

dvi:
	open ../README_RUS.md

style_check:
	cp ../materials/linters/.clang-format ../src/C_Backend
	clang-format -i C_Backend/*.c
	clang-format -i C_Backend/*.h
	clang-format -i QT/3D_Viewer_v1/*.cpp
	clang-format -i QT/3D_Viewer_v1//*.h
	clang-format -i QT/build-3D_Viewer_v1-Desktop_x86_darwin_generic_mach_o_64bit-Debug/*.cpp
	rm C_Backend/.clang-format
