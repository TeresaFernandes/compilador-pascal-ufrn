/*
 * Token.cpp
 *
 *  Created on: 12/10/2011
 *      Author: Claudio
 */

#include "Token.h"

Token::Token() {
	// TODO Auto-generated constructor stub

}

Token::~Token() {
	// TODO Auto-generated destructor stub
}

Token::Token(string _lexema, string _tipo,int _line) {
	lexema = _lexema;
	tipo = _tipo;
	line = _line;
}
string Token::getLexema() {
	return lexema;
}
string Token::getTipo() {
	return tipo;
}
int Token::getLine() {
	return line;
}
