/* Copyright 2022 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_CORE_TRANSFORMS_REMAPPER_PASS_H_
#define TENSORFLOW_CORE_TRANSFORMS_REMAPPER_PASS_H_

#include <memory>

#include "mlir/Pass/Pass.h"  // from @llvm-project

namespace mlir {
namespace tfg {

// Creates a remapper pass to remap the operations onto other opreations which
// decrease the amount of operations to perform a computation.
std::unique_ptr<Pass> CreateRemapperPass(bool enable_mkl_patterns = false);

}  // namespace tfg
}  // namespace mlir

#endif  // TENSORFLOW_CORE_TRANSFORMS_REMAPPER_PASS_H_
