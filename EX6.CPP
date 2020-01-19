// -*- Mode: C++ -*-
// Borland C++ - (C) Copyright 1991 by Borland International

// ex6.cpp:   Using the Dictionary class
// from Hands-on C++

// Corrected and edited by AJY 2014-08-11
//
// Usage:
// > g++ EX6.CPP DICTION.CPP DEF.CPP
// > ./a.out
//


#include <iostream>
#include "DICTION.H"

main()
{
   Dictionary d(5);
   char *word = (char *)"class";
   char *indef[4] =
     {(char *)"a body of students meeting together to study the same subject",
      (char *)"a group sharing the same economic status",
      (char *)"a group, set or kind sharing the same attributes",
      0};
   char *outdef[4];

   d.add_def(word,indef);
   std::cout << word << ":\n\n";
   int ndef = d.get_def(word,outdef);
   for (int i = 0; i < ndef; ++i)
     std::cout << (i+1) << ": " << outdef[i] << "\n";
   return 0;
}
