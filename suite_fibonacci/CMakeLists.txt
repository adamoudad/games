cmake_minimum_required(VERSION 3.10)

project("Suite de Fibonacci" VERSION 1.0)

set(EXECUTABLE fibonacci)

add_executable(
	${EXECUTABLE}
	main.c
)

target_link_libraries(
	${EXECUTABLE}
	m # math.h
)





