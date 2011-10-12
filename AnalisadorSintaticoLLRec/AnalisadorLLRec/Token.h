/*
 * Token.h
 *
 *  Created on: 12/10/2011
 *      Author: Claudio
 */

#ifndef TOKEN_H_
#define TOKEN_H_

#include <string>
using namespace std;

class Token {
public:
	Token();
	Token(string _lexema, string _tipo,int _line);
	virtual ~Token();
	string getLexema();
	string getTipo();
	int getLine();

private:
	string lexema;
	string tipo;
	int line;
};

#endif /* TOKEN_H_ */
