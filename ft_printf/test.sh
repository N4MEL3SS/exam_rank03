#!/bin/sh

clang -D FLAG main.c -o pr
./pr > out_pr.txt

clang main.c ft_printf.c -o ft_pr
./ft_pr > out_ft_pr.txt

diff -y --suppress-common-lines out_pr.txt out_ft_pr.txt

rm pr ft_pr out_pr.txt out_ft_pr.txt
