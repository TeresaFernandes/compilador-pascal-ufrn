/*
 * AnalisadorSintaticoLLRec.h
 *
 *  Created on: 12/10/2011
 *      Author: Claudio
 */

#ifndef ANALISADORSINTATICOLLREC_H_
#define ANALISADORSINTATICOLLREC_H_

#include <iostream>
#include <list>
#include "Token.h"
using namespace std;

class AnalisadorSintaticoLLRec {
private:
	list<Token> tokens;
public:
	AnalisadorSintaticoLLRec();
	AnalisadorSintaticoLLRec(list<Token> _tokens);
	virtual ~AnalisadorSintaticoLLRec();


	// Metodo para consumir um token.
	Token eat ();
	// Metodo para ler o token.
	Token read ();
	void program ();
	void program_heading();
	void block();

};

#endif /* ANALISADORSINTATICOLLREC_H_ */
