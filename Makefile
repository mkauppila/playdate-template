
all: build run
.PHONY: all

build: 
		cmake --build build/ --clean-first
.PHONY: build

clean:
		cmake --build build --target clean
		rm -Rfv hello_world.pdx
.PHONY: clean

run: build
		open hello_world.pdx

