 
windows:
	g++ -shared -fPIC -DWINDOWS -o test_lib.dll testing/test_lib.cpp
	g++ -DWINDOWS -o test_lib.exe testing/test.cpp

	g++ -shared -fPIC -DWINDOWS -o math_lib.dll testing/math_lib.cpp
	g++ -DWINDOWS -o math_test.exe testing/math_test.cpp

unix:
	g++ -shared -fPIC -DUNIX -o test_lib.so testing/test_lib.cpp
	g++ -DUNIX -o test_lib testing/test.cpp

	g++ -shared -fPIC -DUNIX -o math_lib.so testing/math_lib.cpp
	g++ -DUNIX -o math_test testing/math_test.cpp

clean:
	rm -h test_lib test_lib.so test_lib.dll test_lib.exe test_lib.dll test_lib.exe math_test math_test.exe math_lib.so math_lib.dll