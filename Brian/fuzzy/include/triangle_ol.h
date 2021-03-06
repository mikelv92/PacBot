/***************************************************************************
                          triangle_ol.h  -  description
                             -------------------
    begin                : Wed Sep 13 2000
    copyright            : (C) 2000 by Halva Giovanni & Giacomo
    email                : invehalv@airlab.elet.polimi.it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef triangle_ol_h
#define triangle_ol_h 1

#include "fuzzy_set.h"

#ifdef DMALLOC

#include <dmalloc.h>

#endif


/**
* This class inherits from fuzzy_set and specifies it to be a triangle open on the left side.
* @short Class implementing the concept of triangular open on left fuzzy set.
*/

class triangle_ol : public fuzzy_set  //## Inherits: open_left_triangle_inheritance
{
 public:
  /**
   * Constructor generated by the UML software used to build Brian. It return an empty triangle_ol.
   */
  triangle_ol();
  
  /**
   * Copy constructor generated by the UML software used to build Brian. It return a copy of the fuzzy set passed.
   */

  triangle_ol(const triangle_ol &right);

  /**	
   * Constructor that build a triangle_ol.
   * @param alabel is the label given to the the fuzzy set
   * @param ac is the first point of the fuzzy set
   * @param ad is the second point of the fuzzy set
   */
  triangle_ol (char* alabel, float ac, float ad);

  /**	
   * Destructor destroy a fuzzy set and free its data.
   */
  virtual ~triangle_ol();

  /**	
   * Return the first point of the fuzzy set.
   * @return the value of the first point
   */
 float get_c ();
  /**
   * Modify the value of the first point of the fuzzy set.
   * @param value the new value of the point
   */
  void set_c (float value);

  /**	
   * Return the second of the fuzzy set.
   * @return the value of the second point
   */
  float get_d ();
  /**
   * Modify the value of the second point of the fuzzy set.
   * @param value the new value of the point
   */
  void set_d (float value);

  /**	
   * Return the membership of data to the fuzzy set.
   * @see fuzzy_set
   * @return the membership value
   * @param avalue is a crisp data
   */
  float get_membership_value(float avalue);

 private:
  // Data Members for Class Attributes

  float c;
  
  float d;
};

// Class triangle_ol 

inline float triangle_ol::get_c ()
{
  return c;
}

inline void triangle_ol::set_c (float value)
{
  c = value;
}

inline float triangle_ol::get_d ()
{
  return d;
}

inline void triangle_ol::set_d (float value)
{
  d = value;
}


#endif
