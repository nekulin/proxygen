/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include <proxygen/lib/utils/Exception.h>

namespace proxygen {

Exception::Exception(std::string const& msg) : msg_(msg), code_(0) {}

Exception::Exception(const Exception& other)
    : msg_(other.msg_),
      code_(other.code_),
      proxygenError_(other.proxygenError_) {}

Exception::Exception(Exception&& other) noexcept
    : msg_(other.msg_),
      code_(other.code_),
      proxygenError_(other.proxygenError_) {}

const char* Exception::what(void) const throw() { return msg_.c_str(); }

}
