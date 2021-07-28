/*
 * Controller.h
 *
 *  Created on: 28 jul. 2021
 *      Author: N3630024213
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

int controller_loadFromText(char* path , LinkedList* pArrayList);
int controller_loadFromBinary(char* path , LinkedList* pArrayList);
int controller_List(LinkedList* pArrayList);
int controller_saveAsText(char* path , LinkedList* pArrayList);
int controller_saveAsBinary(char* path , LinkedList* pArrayList);
int menuDeOpciones();

#endif /* CONTROLLER_H_ */
