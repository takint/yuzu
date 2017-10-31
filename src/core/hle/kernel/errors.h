// Copyright 2017 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/result.h"

namespace Kernel {

namespace ErrCodes {
enum {
    OutOfHandles = 19,
    SessionClosedByRemote = 26,
    PortNameTooLong = 30,
    NoPendingSessions = 35,
    WrongPermission = 46,
    InvalidBufferDescriptor = 48,
    MaxConnectionsReached = 52,
};
}

// WARNING: The kernel is quite inconsistent in it's usage of errors code. Make sure to always
// double check that the code matches before re-using the constant.

// TODO(bunnei): Replace these with correct errors for Switch OS
constexpr ResultCode ERR_OUT_OF_HANDLES(-1);
constexpr ResultCode ERR_SESSION_CLOSED_BY_REMOTE(-1);
constexpr ResultCode ERR_PORT_NAME_TOO_LONG(-1);
constexpr ResultCode ERR_WRONG_PERMISSION(-1);
constexpr ResultCode ERR_MAX_CONNECTIONS_REACHED(-1);
constexpr ResultCode ERR_INVALID_ENUM_VALUE(-1);
constexpr ResultCode ERR_INVALID_ENUM_VALUE_FND(-1);
constexpr ResultCode ERR_INVALID_COMBINATION(-1);
constexpr ResultCode ERR_INVALID_COMBINATION_KERNEL(-1);
constexpr ResultCode ERR_OUT_OF_MEMORY(-1);
constexpr ResultCode ERR_INVALID_ADDRESS(-1);
constexpr ResultCode ERR_INVALID_ADDRESS_STATE(-1);
constexpr ResultCode ERR_INVALID_HANDLE(-1);
/// Alternate code returned instead of ERR_INVALID_HANDLE in some code paths.
constexpr ResultCode ERR_INVALID_HANDLE_OS(-1);
constexpr ResultCode ERR_NOT_FOUND(-1);
constexpr ResultCode ERR_OUT_OF_RANGE(-1);
constexpr ResultCode ERR_OUT_OF_RANGE_KERNEL(-1);
constexpr ResultCode RESULT_TIMEOUT(-1);
/// Returned when Accept() is called on a port with no sessions to be accepted.
constexpr ResultCode ERR_NO_PENDING_SESSIONS(-1);

} // namespace Kernel
