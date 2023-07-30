// SPDX-License-Identifier: MIT

#include <cstddef>
#include <span>

namespace tmd {
namespace io {

struct mutable_byteview {
    std::span<std::byte> bytes{};

    mutable_byteview() = default;
};

struct const_byteview {
    std::span<const std::byte> bytes{};

    const_byteview() = default;
};

}  // namespace io
}  // namespace tmd
