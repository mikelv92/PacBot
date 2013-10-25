/*
 * PacDot.cpp
 *
 *  Created on: Jul 30, 2013
 *      Author: mikel
 */

#include "PacDot.h"

PacDot::PacDot()
{
	this->rfidCode = "";
	this->bigDot = false;
	this->priority = AHEAD;
}
PacDot::PacDot(string rfidCode, bool bigDot, Priority priority) {
	this->rfidCode = rfidCode;
	this->bigDot = bigDot;
	this->priority = priority;
}

bool PacDot::isBigDot() const
{
	return bigDot;
}

string PacDot::getRfidCode() const
{
	return rfidCode;
}

Priority PacDot::getPriority() const
{
	return priority;
}
//this operator needs to be implemented but cards are never compared
bool PacDot::operator<(const PacDot & p1) const
{
    return true;
}