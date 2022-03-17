#ifndef VARIANT_H
#define VARIANT_H

#if defined(_WIN64)
#include <variant>
template <class... Types>
using variant = std::variant<Types...>;
#elif defined(__APPLE__)
#include "boost/variant.hpp"
template <class... Types>
using variant = boost::variant<Types...>;
#elif defined(__linux__)
#include <variant>
template <class... Types>
using variant = std::variant<Types...>;
#endif

#endif
