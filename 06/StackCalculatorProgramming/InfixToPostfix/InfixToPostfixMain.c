# include <stdio.h>
# include "InfixToPostfix.h"
# define _CRT_SECURE_NO_WARNINGS

int main() {
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	ConvToReversePolishNotationExp(exp1);
	ConvToReversePolishNotationExp(exp2);
	ConvToReversePolishNotationExp(exp3);

	printf("%s \n", exp1);
	printf("%s \n", exp2);
	printf("%s \n", exp3);

	return 0;
}