#ifndef FRONT_H
#define FRONT_H

#include <stdio.h>
#include <ctype.h>

/* Character classes */
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99

/* Token codes */
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26
#define LESSER_OP 27
#define GREATER_OP 28
#define EQUAL_OP 29
#define NEQUAL_OP 30
#define LEQUAL_OP 31
#define GEQUAL_OP 32
#define BOOL_AND 33
#define BOOL_OR 34
#define BOOL_NOT 35
#define SEMICOLON 36
#define OPEN_CURL 37
#define CLOSE_CURL 38
#define KEY_IN 39
#define KEY_OUT 40
#define KEY_IF 41
#define KEY_ELSE 42
#define MOD_OP 43


int lex();

#endif
