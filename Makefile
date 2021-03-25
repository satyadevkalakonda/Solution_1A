project_name=test.exe
src=SRC/func_add.c\
SRC/func_diff.c\
SRC/func_mul.c\
SRC/func_div.c

INC_H=INC
TEST_H=TEST
MAIN_C=test_main.c
TEST_C=TEST/unity.c

create: $(src) $(TEST_C)
	gcc -I $(INC_H) -I $(TEST_H) $(src) $(MAIN_C) $(TEST_C) -o $(project_name)
run:test.exe
	test.exe

clean:
	del /q *.exe1