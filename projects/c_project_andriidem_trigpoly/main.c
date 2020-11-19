/***
 *
 * Project name: TrigPoly
 * File: main.c
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include "src/trigpoly.c"


int main(){

    int _counter = 1;
    /// struct declaration
    TrigPoly trigPoly1;
    TrigPoly trigPoly2;
    TrigPoly trigPoly3;
    TrigPoly loadTrig;


    // test 1 OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // test 1 - TrigPoly generate(int n);
    // generate poly with length 4 and show it
    printf("\ntest %i", _counter);
    printf("\nFirstly let's generate poly with length 4");
    trigPoly1 = GeneratePolynomial(4);
	OutputPolyInfo(trigPoly1, 0, 4, 2);
    printf("\n------------------------------------------------");
    _counter++;


    // test 2 OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // test 2 - TrigPoly generate(int n);
    // generate poly with length 0 and show it
    printf("\ntest %i", _counter);
    printf("\nSecondly let's generate poly with length 0 and show it in g type");
    trigPoly2 = GeneratePolynomial(0);
	OutputPolyInfo(trigPoly2, 0, 4, 2);
    printf("\n------------------------------------------------");
    _counter++;

    // test 3 OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // test 3 - TrigPoly generate(int n);
    // generate poly with length -2 and show it
    printf("\ntest %i", _counter);
    printf("\nThirdly let's generate poly with length -2 and show it in scintific type");
    trigPoly3 = GeneratePolynomial(-2);
	OutputPolyInfo(trigPoly3, 2, 4, 2);
    printf("\n------------------------------------------------");
    _counter++;


    // test 1 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show first poly in Dtype with width = 4 and precision = 2
    printf("\ntest %i", _counter);
	ConsoleOutput(trigPoly1, 0, 4, 2);
    _counter++;
    printf("\n------------------------------------------------");

    // test 2 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show first poly in g with width = 3 and precision = 3
    printf("\ntest %i", _counter);
	ConsoleOutput(trigPoly1, 1, 3, 3);
    _counter++;
    printf("\n------------------------------------------------");

    // test 3 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show first poly in scientific type with width = 5 and precision = 3
    printf("\ntest %i", _counter);
	ConsoleOutput(trigPoly3, 2, 5, 3);
    _counter++;
    printf("\n------------------------------------------------");

    // test 4 ConsoleOutput(TrigPoly poly, int type, int width, int precision)
    // show third poly in type number 5 with width = -5 and precision = -3
    printf("\ntest %i", _counter);
	ConsoleOutput(trigPoly3, 5, -5, -3);
    _counter++;
    printf("\n------------------------------------------------");


    // test 2 - OutputPolyInfo(TrigPoly poly, int type, int width, int precision)
    // show first poly in scientific type with width = -1 and precision = 0
    printf("\ntest %i", _counter);
	OutputPolyInfo(trigPoly1, 2, -1, 0);
    _counter++;
    printf("\n------------------------------------------------");

    ///honestly, func OutputPolyInfo and ConsoleOutput are copypaste of each other, so
    ///there is no necessity in making same tests

    // test 1 - int InputStringOfCoef(TrigPoly * x, char * str)
    // input to a poly from string. correct line
    printf("\ntest %i", _counter);
    printf("\nInput string to poly. Correct line: -4.5 999.6 -7.112 80 17");
	InputStringOfCoef(&trigPoly1, "-4.5 999.6 -7.112 80 17");
	OutputPolyInfo(trigPoly1, 0, 4, 2);
    _counter++;
    printf("\n------------------------------------------------");

    // test 2 - int InputStringOfCoef(TrigPoly * x, char * str)
    // input to a poly from string. incorrect line
    printf("\ntest %i", _counter);
    printf("\nInput string to poly. Incorrect length line: -4.5 999.6 -7.112 80");
	InputStringOfCoef(&trigPoly2, "-4.5 999.6 -7.112 80");
    _counter++;
    printf("\n------------------------------------------------");


    // test 1 - int  OutputTextFile(str * file, TrigPoly p);
    // input to a poly from TextFile. correct address
    printf("\ntest %i", _counter);
    printf("\n%s", (OutputTextFile("test1_outputTextFile.txt", trigPoly1, 0, 5, 3)) ?
           "Input to the text file is done" : "Input to the text file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");

    // test 2 - int  OutputTextFile(str * file, TrigPoly p);
    // input to a poly from TextFile. incorrect address
    printf("\ntest %i", _counter);
    printf("\n%s", (OutputTextFile("C:\\Andrii\\Docs.\\test2_outputTextFile.txt", trigPoly1, 0, 5, 3)) ?
           "Input to the text file is done" : "Input to the text file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");

    // test 3 - int  OutputTextFile(str * file, TrigPoly p);
    // input to a poly from TextFile. empty poly
    printf("\ntest %i", _counter);
    printf("\n%s", (OutputTextFile("test1_outputTextFile.txt", trigPoly3, 0, 5, 3)) ?
           "Input to the text file is done" : "Input to the text file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");

    // test 1 - int  InputTextFile(str * file, TrigPoly * p);
    // input from a TextFile to a poly. correct address, but second line has an element which goes for another poly
    printf("\ntest %i", _counter);
    printf("\n%s", (InputTextFile("test1_outputTextFile.txt", &trigPoly1)) ?
           "Output from the text file is done" : "Output from the text file gone wrong");
	ConsoleOutput(trigPoly1, 0, 5, 3);
    _counter++;
    printf("\n------------------------------------------------");

    // test 2 - int InputTextFile(str * file, TrigPoly * p);
    // input from a TextFile to a poly. incorrect address
    printf("\ntest %i", _counter);
    printf("\n%s", (InputTextFile("C:\\Andrii\\Docs.\\test2_outputTextFile.txt", &trigPoly2)) ?
           "Output from the text file is done" : "Output from the text file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");

    // test 3 - int InputTextFile(str * file, TrigPoly * p);
    // input from a TextFile to a poly. empty poly
    printf("\ntest %i", _counter);
    printf("\n%s", (InputTextFile("test2_outputTextFile.txt", &trigPoly3)) ?
           "Output from the text file is done" : "Output from the text file gone wrong");
    _counter++;
	ConsoleOutput(trigPoly3, 0, 5, 3);
    printf("\n------------------------------------------------");

    // test 1 - int  int OutputBinaryFile(char * filename, TrigPoly p);
    // correct address
    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 11.1 22.2 33.3 -44.4");
    printf("\n%s", (OutputBinaryFile("test1_outputBinaryFile.dat", trigPoly1)) ?
           "Input to the binary file is done" : "Input to the binary file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");

    // test 2 - int OutputBinaryFile(char * filename, TrigPoly p);
    // incorrect address
    printf("\ntest %i", _counter);
    printf("\n%s", (OutputBinaryFile("C:\\Andrii\\Docs.\\test2_outputBinaryFile.dat", trigPoly1)) ?
           "Input to the binary file is done" : "Input to the binary file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");

    // test 3 - int OutputBinaryFile(char * filename, TrigPoly p);
    // empty poly
    printf("\ntest %i", _counter);
    printf("\n%s", (OutputBinaryFile("test2_outputBinaryFile.dat", trigPoly3)) ?
           "Input to the binary file is done" : "Input to the binary file gone wrong");
    _counter++;
    printf("\n------------------------------------------------");


    // test 1 - int  InputBinaryFile(str * file, TrigPoly * p);
    // correct address, but second line has an element which goes for another poly
    printf("\ntest %i", _counter);
    printf("\n%s", (InputBinaryFile("test1_outputBinaryFile.dat", &trigPoly1)) ?
           "Output from the binary file is done" : "Output from the binary file gone wrong");
	ConsoleOutput(trigPoly1, 0, 5, 3);
    printf("\n------------------------------------------------");
    _counter++;

    // test 2 - int  InputBinaryFile(str * file, TrigPoly * p);
    // incorrect address
    printf("\ntest %i", _counter);
    printf("\n%s", (InputBinaryFile("C:\\Andrii\\Docs.\\test2_outputBinaryFile.dat", &trigPoly2)) ?
           "Output from the binary file is done" : "Output from the binary file gone wrong");
    printf("\n------------------------------------------------");
    _counter++;

    // test 3 - int InputBinaryFile(str * file, TrigPoly * p);
    // empty poly
    printf("\ntest %i", _counter);
    printf("\n%s", (InputBinaryFile("test2_outputBinaryFile.dat", &trigPoly3)) ?
           "Output from the binary file is done" : "Output from the binary file gone wrong");
	ConsoleOutput(trigPoly3, 0, 5, 3);
    printf("\n------------------------------------------------");
    _counter++;


    // test 1 TrigPoly AddPolys(TrigPoly p1, TrigPoly p2)
    //        TrigPoly SubPolys(TrigPoly p1, TrigPoly p2)
    // if trigPoly1.n bigger than trigPoly2.n
    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "5.2 1 0 4 5 6 7");
	InputStringOfCoef(&trigPoly2, "5.2 3 1 7 2");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Sum of polynomials is equal:");
    trigPoly3 = AddPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("Subtraction of polynomials is equal:");
    trigPoly3 = SubPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++;
    _counter++;


    //test 2 TrigPoly AddPolys(TrigPoly p1, TrigPoly p2)
    //       TrigPoly SubPolys(TrigPoly p1, TrigPoly p2)
    //if trigPoly1.n less than trigPoly2.n

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "0.5 8 4 7 1");
	InputStringOfCoef(&trigPoly2, "0.5 2 6 3 6 7 2");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Sum of polynomials is equal:");
    trigPoly3 = AddPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("Subtraction of polynomials is equal:");
    trigPoly3 = SubPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++; _counter++;


    // test 3 TrigPoly AddPolys(TrigPoly p1, TrigPoly p2)
    //        TrigPoly SubPolys(TrigPoly p1, TrigPoly p2)
    // if trigPoly1.n equals trigPoly2.n and polynomials have different alpha

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "1.3 0 1 2 3");
	InputStringOfCoef(&trigPoly2, "7.2 0 1 2 3");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Sum of polynomials is equal:");
    trigPoly3 = AddPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("Subtraction of polynomials is equal:");
    trigPoly3 = SubPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++; _counter++;


    // test 1 TrigPoly MultPolys(TrigPoly p1, TrigPoly p2)
    // polies' sizes are equal and polynomials have different alpha

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "8.3 0 1 1 0");
	InputStringOfCoef(&trigPoly2, "8.3 0 2 2 0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Multiplication of polynomials is equal:");
    trigPoly3 = MultPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++; _counter++;


    // test 2 TrigPoly MultPolys(TrigPoly p1, TrigPoly p2)
    // if polynomials have different size and alpha

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "7.5 1 1 1 1");
	InputStringOfCoef(&trigPoly2, "8.3 9 4 6 2 2.3 -7");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("\nIt is not the end. Make this test as a comment & you will be able to continue testing");
    printf("Multiplication of polynomials is equal:\n");
    trigPoly3 = MultPolys(trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly3, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++;

    /*
     * test 1 int UnaryAdd(TrigPoly p1, TrigPoly p2)
     * int UnarySub(TrigPoly p1, TrigPoly p2)
     * different size, one angle
     *      p1 += p2,
     *      p1 -= p2;
     */

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "-3.5 0.0 1.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);
	InputStringOfCoef(&trigPoly2, "-3.5 0.0 1.0 -7.8 16.4");

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("\np1 += p2\np1 = ");
	UnaryAdd(&trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\nSo p1 -= p2 will give us first version of p1.\np1 = ");
	UnarySub(&trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++; _counter++;


    /*
     * test 2 int UnaryAdd(TrigPoly p1, TrigPoly p2)
     * int UnarySub(TrigPoly p1, TrigPoly p2)
     *      p1 += p2, different size, one angle, but another one poly is zero
     *      p1 -= p2;
     */

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "-3.5 1.0 -1.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);
	InputStringOfCoef(&trigPoly2, "-3.5");

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("\np1 += p2\np1 = ");
	UnaryAdd(&trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\nSo p1 -= p2 will give us first version of p1.\np1 = ");
	UnarySub(&trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++; _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 3 int UnaryAdd(TrigPoly p1, TrigPoly p2)
     * int UnarySub(TrigPoly p1, TrigPoly p2)
     * p1 += p2, same sizes, but different angles
     * p1 -= p2;
     */

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "-3.5 0.0 1.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);
	InputStringOfCoef(&trigPoly2, "0.1 0.0 11.0");

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("\np1 += p2\np1 = ");
	UnaryAdd(&trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\nSo p1 -= p2 will give us first version of p1.\np1 = ");
	UnarySub(&trigPoly1, trigPoly2);
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++;
    _counter++;


    /*test 1 int unmul(TrigPoly p1, TrigPoly p2)
     * one size, different angle
     * p1 += p2,
     * p1 -= p2;
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 0.0 1.0 1 0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);
	InputStringOfCoef(&trigPoly2, "-3.5 0.0 1.0 0 1");

    printf("Second polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("\np1 *= p2");
	UnaryMult(&trigPoly1, trigPoly2);

    printf("\np1 = ");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("\n------------------------------------------------");
    _counter++;


    /*
     * no need to call this func with arguments:
     * polynomials with different sizes, because this function with call
     * func MultPolys and printf("Error") and exit
     */


    /*
     * test 1 TrigPoly MultPolyByConst(TrigPoly p, Dtype C);
     *        TrigPoly DivPolyByConst(TrigPoly p, Dtype C);
     * const != 0
     */

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 -4.0");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Polynomial * 5 = ");
    trigPoly2 = MultPolyByConst(trigPoly1, 5);
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Polynomial / 2 = ");
    trigPoly3 = DivPolyByConst(trigPoly1, 5);
	ConsoleOutput(trigPoly3, 0, 4, 2);
    _counter++; _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 2 TrigPoly MultPolyByConst(TrigPoly p, Dtype C);
     *        TrigPoly DivPolyByConst(TrigPoly p, Dtype C);
     * const == 0
    */

    printf("\ntest %i-%i", _counter, _counter+1);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 -4.0");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Polynomial * 0 = ");
    trigPoly2 = MultPolyByConst(trigPoly1, 5);
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Polynomial / 0 = ");
    trigPoly3 = DivPolyByConst(trigPoly1, 5);
    _counter++; _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 1 int div_(TrigPoly p, TrigPoly p1);
             Dtype mod(TrigPoly p, TrigPoly p1);
             Dtype getPolyValue(TrigPoly p);
             different sizes of polynomials
    */

    printf("\ntest %i-%i", _counter, _counter+2);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 10.0");
    trigPoly1.alpha = M_PI / 2;

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trigPoly1));
	InputStringOfCoef(&trigPoly2, "-3.5 0.0 1.0 0 1");
    trigPoly2.alpha = M_PI / 2;

    printf("\nSecond polynomial is equal:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trigPoly2));
    printf("\ndiv (p1/p2) of polynomials' values without remaining: %i", div_(trigPoly1, trigPoly2));
    printf("\nmod (p1/p2) of polynomials' values with remaining: %lf", mod(trigPoly1, trigPoly2));
	ConsoleOutput(trigPoly1, 0, 4, 2);
    _counter +=3;

    printf("\n------------------------------------------------");


    /*
     * test 2 int div_(TrigPoly p, TrigPoly p1);
             Dtype mod(TrigPoly p, TrigPoly p1);
             Dtype getPolyValue(TrigPoly p);
             different sizes of polynomials, but second one = 0
    */

    printf("\ntest %i-%i", _counter, _counter+2);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 10.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trigPoly1));
	InputStringOfCoef(&trigPoly2, "-3.5");

    printf("\nSecond polynomial is equal to zero:");
	ConsoleOutput(trigPoly2, 0, 4, 2);

    printf("Value of this polynomial: %lf", getPolyValue(trigPoly2));
    printf("\ndiv (p1/p2) of polynomials' values without remaining: %i", div_(trigPoly1, trigPoly2));
    printf("\nmod (p1/p2) of polynomials' values with remaining: %lf", mod(trigPoly1, trigPoly2));
    _counter +=3;

    printf("\n------------------------------------------------");


    /*
     * test 1 TrigPoly Derivative(TrigPoly p);
     * polynomial with lenght = 1
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 10.0");

    printf("\nFirst polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Derivative is: ");
    trigPoly2 = Derivative(trigPoly1);
	ConsoleOutput(trigPoly2, 0, 4, 2);
    _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 2 TrigPoly Derivative(TrigPoly p);
     * polynomial with lenght = 2
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 10.0 1.0 1.0 2.0 -4.0");

    printf("Polynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Derivative is: ");
    trigPoly2 = Derivative(trigPoly1);
	ConsoleOutput(trigPoly2, 0, 4, 2);
    _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 1 CalcIntegral(TrigPoly p, Dtype C);
     * polynomial with b0 == 0
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 0 -5 7");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Constant = 1:");
    printf("\nIntegral is: ");
    trigPoly2 = CalcIntegral(trigPoly1, 1);
	ConsoleOutput(trigPoly2, 0, 4, 2);
    _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 2 integral(TrigPoly p, Dtype C);
     * polynomial with b0 != 0, so CalcIntegral from b0 = b0*x, which is not a TrigPoly
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 10.0");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("Constant = 1:");
    printf("\nIntegral is: ");
    trigPoly2 = CalcIntegral(trigPoly1, 1);
    _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 1 Dtype IntegratePoly(TrigPoly p, Dtype a, Dtype b);
     * polynomial with length = 0
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("[a, b] = [0, M_PI]");
    printf("\nRieman's Integral = %lf", IntegratePoly(trigPoly1, 0, M_PI));
	ConsoleOutput(trigPoly2, 0, 4, 2);
    _counter++;

    printf("\n------------------------------------------------");


    /*
     * test 2 IntegratePoly(TrigPoly p, Dtype a, Dtype b);
     * polynomial with length > 0
     */

    printf("\ntest %i", _counter);
	InputStringOfCoef(&trigPoly1, "-3.5 2.0 10.0 14 11 -22 12");

    printf("\nPolynomial is equal:");
	ConsoleOutput(trigPoly1, 0, 4, 2);

    printf("[a, b] = [0, M_PI]");
    printf("\nRieman's Integral = %lf", IntegratePoly(trigPoly1, 0, M_PI));
    _counter++;

    printf("\n------------------------------------------------");

    return 0;
}
