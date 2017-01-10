// @HEADER
// ************************************************************************
//
//               Digital Image Correlation Engine (DICe)
//                 Copyright 2015 Sandia Corporation.
//
// Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,
// the U.S. Government retains certain rights in this software.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
// 1. Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the Corporation nor the names of the
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY SANDIA CORPORATION "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL SANDIA CORPORATION OR THE
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Questions? Contact: Dan Turner (dzturne@sandia.gov)
//
// ************************************************************************
// @HEADER

#ifndef DICE_FEATURE_H
#define DICE_FEATURE_H

#include <DICe.h>
#include <DICe_Image.h>

#include <Teuchos_RCP.hpp>

namespace DICe {

/// Free function to match features from one DICe image to another
/// \param left_image pointer to the left image
/// \param right_image pointer to the right image
/// \param left_x [out] image x coordinates in the left image for features
/// \param left_y [out] image y coordinate in the left image for features
/// \param right_x [out] image x coordinates in the right image for features
/// \param right_y [out] image y coordinate in the right image for features
/// \param draw_result_image output an image showing the matched features
DICE_LIB_DLL_EXPORT
void match_features(Teuchos::RCP<Image> left_image,
  Teuchos::RCP<Image> right_image,
  std::vector<scalar_t> & left_x,
  std::vector<scalar_t> & left_y,
  std::vector<scalar_t> & right_x,
  std::vector<scalar_t> & right_y,
  const bool draw_result_image=false);

}// End DICe Namespace

#endif
