#include <stdio.h>
#include <ATest2.h>

int my_test() {
	return 1;
}

int main(int argc, char** argv) {
	atest_register("mytest", my_test);
	return atest_runtest("mytest");
	//return 1;
}