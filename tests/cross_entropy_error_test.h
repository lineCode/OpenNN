/****************************************************************************************************************/
/*                                                                                                              */
/*   OpenNN: Open Neural Networks Library                                                                       */
/*   www.opennn.net                                                                                             */
/*                                                                                                              */
/*   C R O S S   E N T R O P Y   E R R O R   T E S T   C L A S S   H E A D E R                                  */
/*                                                                                                              */
/*   Roberto Lopez                                                                                              */
/*   Artelnics - Making intelligent use of data                                                                 */
/*   robertolopez@artelnics.com                                                                                 */
/*                                                                                                              */
/****************************************************************************************************************/


#ifndef __CROSSENTROPYERRORTEST_H__
#define __CROSSENTROPYERRORTEST_H__

// Unit testing includes

#include "unit_testing.h"

using namespace OpenNN;

class CrossEntropyErrorTest : public UnitTesting
{

#define	STRING(x) #x
#define TOSTRING(x) STRING(x)
#define LOG __FILE__ ":" TOSTRING(__LINE__)"\n"

public:

   // GENERAL CONSTRUCTOR

   explicit CrossEntropyErrorTest();


   // DESTRUCTOR

   virtual ~CrossEntropyErrorTest();


   // METHODS

   // Get methods

   // Set methods

   // Objective methods

   void test_calculate_loss();   
   void test_calculate_selection_loss();

   void test_calculate_minimum_loss();
   void test_calculate_minimum_selection_loss();

   void test_calculate_gradient();

   void test_calculate_Hessian();

   void test_to_XML();
   void test_from_XML();

   // Unit testing methods

   void run_test_case();
};

#endif


// OpenNN: Open Neural Networks Library.
// Copyright (C) 2005-2018 Artificial Intelligence Techniques, SL.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
