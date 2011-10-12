/*
 * Exception.cpp
 *
 *  Created on: 12/10/2011
 *      Author: Claudio
 */

#include "Exception.h"


Exception::Exception() {
	// TODO Auto-generated constructor stub

}

Exception::Exception(Token _tokenE, Token _tokenR) {
	cout << "ERRO line:" << _tokenR.getLine() << ".\n";
	cout << "expected " << _tokenE.getLexema() <<  " before " << _tokenR.getLexema() << ".\n";
}

Exception::~Exception() {
	// TODO Auto-generated destructor stub
}
