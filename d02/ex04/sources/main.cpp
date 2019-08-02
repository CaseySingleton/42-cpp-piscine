/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:28:19 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 13:44:16 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Stack.hpp"

bool		isOperator(char c)
{
	std::string operators = "+-*/()";
	if (operators.find(c) != std::string::npos)
		return (true);
	return (false);
}

Fixed		doTheMath(Fixed rhs, char op, Fixed lhs)
{
	switch (op)
	{
		case '+':
			return (lhs + rhs);
		case '-':
			return (lhs - rhs);
		case '*':
			return (lhs * rhs);
		case '/':
			return (lhs / rhs);
	}
	return (Fixed(0));
}

Fixed		getResult(Stack ops, Stack nums)
{
	if (ops.isEmpty() == true)
		return (nums.pop());
	Fixed lhs = nums.pop();
	char op = ops.pop().toInt();
	if (op == '*' || op == '/')
		return (doTheMath(lhs, op, getResult(ops, nums)));
	else
		return (doTheMath(lhs, op, getResult(ops, nums)));
	return (Fixed());
}

void		evalExpr(std::string s)
{
	Stack numberStack;
	Stack operatorStack;
	Fixed result;
	char op;
	int j;

	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) == ' ' || s.at(i) == '\t')
			continue ;
		if (isOperator(s.at(i)) == true)
		{
			if (s.at(i) == ')')
			{
				while ((op = operatorStack.pop().toInt()) != '(')
					numberStack.push(doTheMath(numberStack.pop(), op, numberStack.pop()).toFloat());
			}
			else
				operatorStack.push(s.at(i));
		}
		j = 0;
		while (i + j < s.length() && (isdigit(s.at(i + j)) || s.at(i + j) == '.'))
			j++;
		if (j > 0)
		{
			numberStack.push(std::stof(s.substr(i, j)));
			i += j - 1;
		}
	}
	std::cout << getResult(operatorStack, numberStack) << std::endl;
}

int			main(int argc, char *argv[])
{
	if (argc == 2)
		evalExpr(argv[1]);
	else
		std::cout << "Usage: ./eval_expr '( 18.18 + 3.03 ) * 2'" << std::endl;
	return (0);
}
