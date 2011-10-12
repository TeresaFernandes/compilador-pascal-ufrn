/*
 * AnalisadorSintaticoLLRec.cpp
 *
 *  Created on: 12/10/2011
 *      Author: Claudio
 */

#include "AnalisadorSintaticoLLRec.h"

AnalisadorSintaticoLLRec::AnalisadorSintaticoLLRec() {
	// TODO Auto-generated constructor stub

}
AnalisadorSintaticoLLRec::AnalisadorSintaticoLLRec(list<Token> _tokens) {
	tokens = _tokens;
}

AnalisadorSintaticoLLRec::~AnalisadorSintaticoLLRec() {
	// TODO Auto-generated destructor stub
}


// Metodo para consumir um token.
Token AnalisadorSintaticoLLRec::eat () {
	Token retorno = tokens.front();
	tokens.pop_front();
	return retorno;
}
// Metodo para ler o token.
Token AnalisadorSintaticoLLRec::read () {
	return tokens.front();
}

void AnalisadorSintaticoLLRec::program () {
	program_heading();
	block();
}

void AnalisadorSintaticoLLRec::program_heading() {

}

void AnalisadorSintaticoLLRec::block() {

}
