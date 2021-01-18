#pragma once

/**
* @brief Checks if the number divisible by x.
* 
* @param number the number to divide
* @param x the number to divide by
*
* @return true if the number divisible by x, else false
*/
_Bool DividedByX(unsigned int number, unsigned int x);

/**
* @brief Checks if the number contains the given digit.
*
* @param number the number
* @param digit the digit
*
* @return true if the number contains the digit, else false
*/
_Bool ContainsDigit(unsigned int number, unsigned short digit);

/**
* @brief Plays the Boom-Trach game.
*
* @param max the upper bound of the game
*/
void BoomTrach(unsigned int max);