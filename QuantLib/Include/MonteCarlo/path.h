/*
 * Copyright (C) 2000
 * Ferdinando Ametrano, Luigi Ballabio, Adolfo Benin, Marco Marchioro
 * 
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.sourceforge.net/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated 
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, contact ferdinando@ametrano.net
 *
 * QuantLib license is also available at http://quantlib.sourceforge.net/LICENSE.TXT
*/
/*! \file path.h
	\brief This class represent the idea of path	
	$Source$
	$Name$
	$Log$
	Revision 1.2  2001/01/05 15:58:27  lballabio
	Fixed Doxygen documentation

	Revision 1.1  2001/01/04 17:31:22  marmar
	Alpha version of the Monte Carlo tools.
	
*/

#ifndef quantlib_montecarlo_path_h
#define quantlib_montecarlo_path_h

#include "qldefines.h"
#include "array.h"

namespace QuantLib {

	namespace MonteCarlo {

    	/*!
    	For the time being Path is equivalent to Array.	In the future this 
    	could change and path might contain more information.
    	As today, Path contains the list of continuously-compunded variations,
    		LOG(Y_{i+1}/Y_i) for i = 0, ..., n-1 ,
    	where Y_i is the value of the underlying at discretized time i.
    	*/
		typedef Array Path;
	}

}

#endif

