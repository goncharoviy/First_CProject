#include <stdio.h>
#include <stdlib.h>

/*
*
* cc - для компиляции
* сс -o main main.c - компиляция исполняемого файла с особым именем
* ./a.out - для вызова
* 
*/

int main(void){ // ф-ция не принимает аргументы и возвращает код (целочисл. знач.) возврата
    puts("Hello world!"); // вывод библиотеки stdlib
    return EXIT_SUCCESS; // константа кода успешного вывода библитеки stdlib
}