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

/*! \file controlvariatedpathpricer.cpp
    
    $Source$
    $Name$
    $Log$
    Revision 1.2  2001/01/05 15:58:27  lballabio
    Fixed Doxygen documentation

    Revision 1.1  2001/01/05 12:28:15  lballabio
    Renamed SinglePathControlVariatedPricer to ControlVariatedPathPricer

    Revision 1.2  2001/01/05 11:02:38  lballabio
    Renamed SinglePathPricer to PathPricer

    Revision 1.1  2001/01/04 17:31:23  marmar
    Alpha version of the Monte Carlo tools.
            
*/

#include "controlvariatedpathpricer.h"

namespace QuantLib {

    namespace MonteCarlo {

        ControlVariatedPathPricer::ControlVariatedPathPricer(
            Handle<PathPricer > pricer,
            Handle<PathPricer > controlVariate,
            double controlVariateValue)
        : pricer_(pricer), controlVariate_(controlVariate), 
          controlVariateValue_(controlVariateValue) {
            isInitialized_=true;
        }
        
        double ControlVariatedPathPricer::value(const Path &path) const {
            QL_REQUIRE(isInitialized_,
                "SinglePathControlVariatedPricer not initialized");
            return pricer_->value(path) - controlVariate_->value(path) + 
                controlVariateValue_;
        }

    }

}
