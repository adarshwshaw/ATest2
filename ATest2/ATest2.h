// ATest2.h : Include file for standard system include files,
// or project specific include files.

#ifndef ATEST2
#define ATEST2

typedef int (*ATEST)();

typedef struct {
	char testName[128];
	ATEST testfunc;
}Atest;

void atest_register(const char*,ATEST);
int atest_runtest(const char*);

#endif // ATEST2
