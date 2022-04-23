cmake_minimum_required(VERSION 3.21)
project(exam_rank03 C)

set(CMAKE_C_STANDARD 99)
add_compile_options(-DFLAG)

add_executable(gnl get_next_line/main.c
		get_next_line/get_next_line.c
		get_next_line/get_next_line.h)
add_executable(ft_printf ft_printf/main.c
		ft_printf/ft_printf.c)
add_executable(micro_paint micro_paint/micro_paint.c)
