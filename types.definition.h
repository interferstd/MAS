#ifndef _TYPES_H
#define _TYPES_H

#include <stdlib.h>

typedef unsigned char       Word;
typedef unsigned short      DoubleWord;
typedef unsigned long       QuadroWord;
typedef unsigned long long  OctoWord;

union Iterator
{
  void *position;
  Word *asWord;
  DoubleWord *asDoubleWord;
  QuadroWord *asQuadroWord;
  OctoWord *asOctoWord;
};
typedef union Iterator Iterator;
const Iterator InitIterator = { NULL };

struct String
{
  char * content;
  size_t length;
};
typedef struct String String;
const String InitString = { NULL, 0 };

struct Program
{
  String * string;
  size_t countStrings;
};
typedef struct Program Program;
const Program InitProgram = { NULL, 0 };

struct Executed
{
  Word *word;
  size_t countWords;
};
typedef struct Executed Executed;
const Executed InitExecuted = { NULL, 0 };

struct Buffer
{
  unsigned char* content;
  size_t size;
};
typedef struct Buffer Buffer;
const Buffer InitBuffer = { NULL, 0 };

#endif
