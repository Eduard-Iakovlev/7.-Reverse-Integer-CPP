#pragma once
class OutputSolution{
public:
	OutputSolution() = default;

	void setOutput(int example, int x, int expected);
	void setResult();

	void printOutput();
	void checkPrint();

private:
	int example, x, expected, result;
};

