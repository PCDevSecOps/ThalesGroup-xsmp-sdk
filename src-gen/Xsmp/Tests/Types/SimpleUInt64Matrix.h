// Copyright 2023 THALES ALENIA SPACE FRANCE. All rights reserved.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// -----------------------------------------------------------------------------
// File Name    : SimpleUInt64Matrix.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleUInt64Matrix.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEUINT64MATRIX_H_
#define XSMP_TESTS_TYPES_SIMPLEUINT64MATRIX_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/PrimitiveTypes.h"
#include "Smp/Publication/ITypeRegistry.h"
#include "Xsmp/Array.h"
#include "Xsmp/Tests/Types/SimpleUInt64Array.h"

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using SimpleUInt64Matrix = ::Xsmp::Array<::Xsmp::Tests::Types::SimpleUInt64Array, 3>;

/// Universally unique identifier of type SimpleUInt64Matrix.
static constexpr ::Smp::Uuid Uuid_SimpleUInt64Matrix { 0xc097600dU, 0x870eU,
        0x48d3U, 0xa12dU, 0x385c2e5fb99cU };

void _Register_SimpleUInt64Matrix(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEUINT64MATRIX_H_
