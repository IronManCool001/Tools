all:
	@echo "Hello"
build:
	gcc main.c -o tools
	@echo "Build finished"
run:
	gcc main.c -o tools
	tools.exe
clean:
	del tools.exe
	cls
cleanbuild:
	del tools.exe
	gcc main.c -o tools
	@echo "Clean Build Finished"