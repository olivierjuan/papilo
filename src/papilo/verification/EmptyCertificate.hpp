/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*               This file is part of the program and library                */
/*    PaPILO --- Parallel Presolve for Integer and Linear Optimization       */
/*                                                                           */
/* Copyright (C) 2020-2022 Konrad-Zuse-Zentrum                               */
/*                     fuer Informationstechnik Berlin                       */
/*                                                                           */
/* This program is free software: you can redistribute it and/or modify      */
/* it under the terms of the GNU Lesser General Public License as published  */
/* by the Free Software Foundation, either version 3 of the License, or      */
/* (at your option) any later version.                                       */
/*                                                                           */
/* This program is distributed in the hope that it will be useful,           */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of            */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             */
/* GNU Lesser General Public License for more details.                       */
/*                                                                           */
/* You should have received a copy of the GNU Lesser General Public License  */
/* along with this program.  If not, see <https://www.gnu.org/licenses/>.    */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef _PAPILO_VERI_EMPTY_CERTIFICATE_HPP_
#define _PAPILO_VERI_EMPTY_CERTIFICATE_HPP_

#include "papilo/verification/CertificateInterface.hpp"

namespace papilo
{

/// type to store necessary data for post solve
template <typename REAL>
class EmptyCertificate : public CertificateInterface<REAL>
{
 public:
   EmptyCertificate() = default;

   void
   print_header(){};

   void
   change_upper_bound( REAL val, const String& name,
                       ArgumentType argument = ArgumentType::kPrimal )
   {
   }

   void
   change_lower_bound( REAL val, const String& name,
                       ArgumentType argument = ArgumentType::kPrimal )
   {
   }

   void
   change_rhs( int row, REAL val, const SparseVectorView<REAL>& data,
               const Vec<String>& names, const Vec<int>& var_mapping )
   {
   }

   void
   change_lhs( int row, REAL val, const SparseVectorView<REAL>& data,
               const Vec<String>& names, const Vec<int>& var_mapping )
   {
   }

   void
   mark_row_redundant( int row )
   {
   }

   void
   update_row( int row, int col, REAL new_val,  const SparseVectorView<REAL>& data, RowFlags& rflags,
               REAL lhs, REAL rhs, const Vec<String>& names,
               const Vec<int>& var_mapping ){};

   void
   sparsify( int eqrow, int candrow, REAL scale )
   { }


   void
   substitute( int col, int row,
               const Problem<REAL>& currentProblem ) {};

   void
   substitute( int col, const SparseVectorView<REAL>& equality, const Problem<REAL>& currentProblem )
   { }


   void
   compress( const Vec<int>& rowmapping, const Vec<int>& colmapping,
             bool full = false )
   {
   }
};

} // namespace papilo

#endif
