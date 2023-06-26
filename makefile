 
windows:
	g++ -shared -fPIC -DWINDOWS -o test_lib.dll testing/test_lib.cpp
	g++ -DWINDOWS -o test_lib.exe testing/test.cpp

linux:
	g++ -shared -fPIC -DLINUX -o test_lib.so testing/test_lib.cpp
	g++ -DLINUX -o test_lib testing/test.cpp

clean:
	rm test_lib test_lib.so test_lib.dll test_lib.exe