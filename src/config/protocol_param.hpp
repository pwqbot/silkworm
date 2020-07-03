/*
   Copyright 2020 The Silkworm Authors

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef SILKWORM_CONFIG_PROTOCOL_PARAM_H_
#define SILKWORM_CONFIG_PROTOCOL_PARAM_H_

#include <stdint.h>

#include "common.hpp"

namespace silkworm {

// Fee schedule—see Appendix G of the Yellow Paper
// https://ethereum.github.io/yellowpaper/paper.pdf
namespace fee {

constexpr uint64_t kRsclear{15000};

constexpr uint64_t kGcodeDeposit{200};

constexpr uint64_t kGtxCreate{32000};
constexpr uint64_t kGtxDataZero{4};
constexpr uint64_t kGtxDataNonZeroFrontier{68};
constexpr uint64_t kGtxDataNonZeroEIP2028{16};
constexpr uint64_t kGtransaction{21000};
}  // namespace fee

namespace param {
constexpr size_t kMaxStackDepth{1024};

// https://eips.ethereum.org/EIPS/eip-170
constexpr size_t kMaxCodeSize{0x6000};

constexpr uint64_t kFrontierBlockReward{5 * kEther};
constexpr uint64_t kByzantiumBlockReward{3 * kEther};
constexpr uint64_t kConstantinopleBlockReward{2 * kEther};
}  // namespace param
}  // namespace silkworm

#endif  // SILKWORM_CONFIG_PROTOCOL_PARAM_H_