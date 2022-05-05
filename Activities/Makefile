PROJ_NAME=LINUX_ACTIVITIES
SRC=Ascii.c

Build : $(SRC)
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis:
   cppcheck --enable=all $(SRC)

Clean:
	$(RM) $(call FixPath,*.out)