// ATest2.cpp : Defines the entry point for the application.
//

#include "ATest2.h"
#include <string.h>

static Atest tests[10];
static int idx = -1;
void atest_register(const char* name, ATEST func) {
	Atest t = { .testfunc = func };
	strcpy(t.testName, name);
	tests[++idx] = t;
}

int atest_runtest(const char* name) {
	for (int i = 0; i <= idx; i++) {
		if (strcmp(name, tests[i].testName) == 0) return tests[i].testfunc();
	}

	return -1;
}
