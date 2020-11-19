/***
 *
 * Project name: TrigPoly
 * File: trigpoly.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/// --- Base structure of TrigPoly ---
# ifndef _TRIGPOLY_ /// to prevent errors
# define _TRIGPOLY_

typedef double Dtype;
#define SIZE_OF_DTYPE sizeof(Dtype)

typedef struct{
    size_t n;       //size of polynomial
    Dtype alpha;    // real number – angle
    Dtype * a;      // coefficients of sin
    Dtype * b;      // coefficients of cos
} TrigPoly;

# endif


/// --- Functions for POLYNOMIAL ---

// basic operations
extern TrigPoly AddPolys(TrigPoly p1, TrigPoly p2); //+
extern TrigPoly SubPolys(TrigPoly p1, TrigPoly p2); //+
extern TrigPoly MultPolys(TrigPoly p1, TrigPoly p2); //+
extern TrigPoly MultPolyByConst(TrigPoly p, Dtype C); //+
extern int div_(TrigPoly p, TrigPoly p1); //+
extern TrigPoly DivPolyByConst(TrigPoly p, Dtype C); //+
extern Dtype mod(TrigPoly p, TrigPoly p1);//+
extern Dtype getPolyValue(TrigPoly p); //+
extern TrigPoly Derivative(TrigPoly p);
extern TrigPoly CalcIntegral(TrigPoly p, Dtype C);
extern Dtype IntegratePoly(TrigPoly p, Dtype A, Dtype B);

// unary operations
extern int UnaryAdd(TrigPoly * p1, const TrigPoly p2); //+
extern int UnarySub(TrigPoly * p1, const TrigPoly p2); //+
extern int UnaryMult(TrigPoly * p1, const TrigPoly p2); //+

// i/o functions
extern void OutputPolyInfo(TrigPoly poly, int type, int width, int precision); //+
extern int OutputBinaryFile(char * filename, TrigPoly p); //+
extern int OutputTextFile(char* File, TrigPoly poly, int type, int width, int precision); //+
extern void ConsoleOutput(TrigPoly poly, int type, int width, int precision); //+
extern int InputBinaryFile(char * filename, TrigPoly * p); //+
extern int InputTextFile(char * filename, TrigPoly * x); //+

// generation and destroying functions
extern TrigPoly GeneratePolynomial(int n); //+
extern int InputStringOfCoef(TrigPoly * x, char * str); //+
extern int InputAsTable(TrigPoly * x);
extern int destroy(TrigPoly * x); //+

// extra for using to implement previous
extern Dtype InputAlpha();
extern Dtype CharFileToDouble(FILE* f1);
extern Dtype StringToDouble(char * str);
extern int SpacecCounter(FILE* f);
