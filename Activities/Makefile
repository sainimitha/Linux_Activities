PROJ_NAME=LINUX_ACTIVITIES
SRC=Ascii.c

Build : $(SRC)
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis:
   cppcheck --enable=all $(SRC)

dynamic_analysis: Build
   valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


Clean:
	$(RM) $(call FixPath,*.out)