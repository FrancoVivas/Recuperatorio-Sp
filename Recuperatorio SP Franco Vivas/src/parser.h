/*
 * parser.h
 *
 *  Created on: 28 jul. 2021
 *      Author: N3630024213
 */

#include "LinkedList.h"

#ifndef PARSER_H_
#define PARSER_H_

int parser_FromText(FILE* pFile, LinkedList* pArrayList);
int parser_FromBinary(FILE* pFile , LinkedList* pArrayList);

#endif /* PARSER_H_ */
