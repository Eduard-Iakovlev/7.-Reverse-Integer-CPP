#include <iostream>
#include "OutputSolution.h"

int main(){
	setlocale(LC_ALL, "Russian");

	int example = 0;
	int x, expected;

	OutputSolution outputSolution;

	example++;
	x = 123;
	expected = 321;
	outputSolution.setOutput(example, x, expected);
	outputSolution.printOutput();

	example++;
	x = -123;
	expected = -321;
	outputSolution.setOutput(example, x, expected);
	outputSolution.printOutput();

	example++;
	x = 120;
	expected = 21;
	outputSolution.setOutput(example, x, expected);
	outputSolution.printOutput();

}
