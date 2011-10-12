/*
 * Exception.h
 *
 *  Created on: 12/10/2011
 *      Author: Claudio
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_
#include "Token.h"
#include <iostream>
using namespace std;

class Exception {
public:
	Exception();
	Exception(Token _tokenE, Token _tokenR);
	virtual ~Exception();
};

#endif /* EXCEPTION_H_ */
