// -*- Mode: C++ -*-
// Borland C++ - (C) Copyright 1991 by Borland International

// def.cpp:   Implementation of the Definition class
// from Hands-on C++

#include <strings.h>
#include "DEF.H"

// Corrected and edited by AJY 2014-08-11
//
// Usage:
// > g++ EX6.CPP DICTION.CPP DEF.CPP
// > ./a.out
//


void Definition::put_word(char *s)
{
   word = new char[strlen(s)+1];
   strcpy(word,s);
   nmeanings = 0;
}

void Definition::add_meaning(char *s)
{
   if (nmeanings < Maxmeans)
   {
      meanings[nmeanings] = new char[strlen(s)+1];
      strcpy(meanings[nmeanings++],s);
   }
}

char * Definition::get_meaning(int level, char *s)
{
   if (0 <= level && level < nmeanings)
      return strcpy(s,meanings[level]);
   else
      return 0;                                // line 27
}
