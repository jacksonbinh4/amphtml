// -*- C++ -*-

// AUTO GENERATED; DO NOT EDIT.
// To regenerate this file, see comments in bin/validatorgen

#ifndef CPP_HTMLPARSER_VALIDATORS_JSON_H_
#define CPP_HTMLPARSER_VALIDATORS_JSON_H_

#include <array>
#include <functional>
#include <iostream>
#include <optional>
#include <string_view>
#include <utility>
#include <vector>

namespace htmlparser::json {

enum class StateCode : uint8_t {
  $ = 0,
  ARRAY_FIRST_ITEM = 1,
  ARRAY_NEXT_ITEM = 2,
  ARRAY_SEPARATOR = 3,
  DICT = 4,
  DICT_END_OR_SEPARATOR = 5,
  DICT_KEY = 6,
  DICT_KEY_BEGIN_QUOTE = 7,
  DICT_VALUE = 8,
  FALSE_1 = 9,
  FALSE_2 = 10,
  FALSE_3 = 11,
  FALSE_4 = 12,
  NULL_1 = 13,
  NULL_2 = 14,
  NULL_3 = 15,
  NUMBER = 16,
  NUMBER_AFTER_E_DIGIT_NOTATION = 17,
  NUMBER_AFTER_E_NOTATION = 18,
  NUMBER_AFTER_HYPHEN = 19,
  NUMBER_AFTER_PERIOD = 20,
  NUMBER_AFTER_PERIOD_DIGIT = 21,
  NUMBER_AFTER_PLUS_MINUS_AFTER_E_NOTATION = 22,
  NUMBER_AFTER_ZERO = 23,
  STRING = 24,
  STRING_ESCAPE = 25,
  TRUE_1 = 26,
  TRUE_2 = 27,
  TRUE_3 = 28,
  UNICODE_HEX_CHAR_FIRST = 29,
  UNICODE_HEX_CHAR_LAST = 30,
  UNICODE_HEX_CHAR_SECOND = 31,
  UNICODE_HEX_CHAR_THIRD = 32,
};

enum class CallbackCode {
  NONE = 0,
  ARRAY_END = 1,
  ARRAY_T = 2,
  ARRAY_VAL_END = 3,
  DICT_END = 4,
  DICT_KEY_BEGIN = 5,
  DICT_KEY_END = 6,
  DICT_T = 7,
  DICT_VAL_END = 8,
  FALSE_T = 9,
  FLOATING_POINT_T = 10,
  NULL_T = 11,
  NUMBER_T = 12,
  ROOT_ARRAY = 13,
  ROOT_BOOL_FALSE = 14,
  ROOT_BOOL_TRUE = 15,
  ROOT_DICT = 16,
  ROOT_NULL_VAL = 17,
  ROOT_NUMBER = 18,
  ROOT_NUMBER_AFTER_ZERO = 19,
  ROOT_STRING = 20,
  STRING_T = 21,
  TRUE_T = 22,
};

using Callback = std::function<void(CallbackCode, StateCode, int)>;
using LineCol = std::pair<int, int>;


// Validates json string, returns error line/col if str is invalid json.
inline std::pair<bool, LineCol> Validate(std::string_view str,
                                         Callback callback = nullptr);

// Extracts CallbackCode from the bytes.
inline static CallbackCode ToCallbackCode(uint32_t code);

// Extracts push StateCode from the bytes.
inline static StateCode ToPushStateCode(uint32_t code);

// Extracts active State code from the bytes.
inline static StateCode ToCurrentStateCode(uint32_t code);

// Returns code for current token and active state.
inline static uint32_t CodeForToken(unsigned char c, StateCode state);

// Checks the push bit is on.
inline static bool HasPushBit(uint32_t code);

// Checks the pop bit is on.
inline static bool HasPopBit(uint32_t code);

// Checks the shift bit is on.
inline static bool HasShiftBit(uint32_t code);

constexpr std::array<int, INT8_MAX> kTokenIndexes {
    44, 44, 44, 44, 44, 44, 44, 44,
    44, 0, 1, 44, 44, 2, 44, 44,
    44, 44, 44, 44, 44, 44, 44, 44,
    44, 44, 44, 44, 44, 44, 44, 44,
    3, 44, 4, 44, 44, 44, 44, 44,
    44, 44, 44, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 44, 44, 44, 44, 44,
    44, 21, 22, 23, 24, 25, 26, 44,
    44, 44, 44, 44, 44, 44, 44, 44,
    44, 44, 44, 44, 44, 44, 44, 44,
    44, 44, 44, 27, 28, 29, 44, 44,
    44, 30, 31, 32, 33, 34, 35, 44,
    44, 44, 44, 44, 36, 44, 37, 44,
    44, 44, 38, 39, 40, 41, 44, 44,
    44, 44, 44, 42, 44, 43, 44, };

constexpr std::array<std::array<uint32_t, 46>, 33> kParseStates {{
    // $
    // Code: 0
    {0x0, 0x0, 0x0, 0x0, 0x14001800, 0xff,
     0xff, 0x12001300, 0xff, 0xff, 0x13001700, 0x12001000,
     0x12001000, 0x12001000, 0x12001000, 0x12001000, 0x12001000, 0x12001000,
     0x12001000, 0x12001000, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xd000100, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xe000900,
     0xff, 0x11000d00, 0xff, 0xff, 0xf001a00, 0xff,
     0x10000400, 0xff, 0xff, 0xff},
    // ARRAY_FIRST_ITEM
    // Code: 1
    {0x100, 0x100, 0x100, 0x100, 0x15031880, 0xff,
     0xff, 0xc031380, 0xff, 0xff, 0xc031780, 0xc031080,
     0xc031080, 0xc031080, 0xc031080, 0xc031080, 0xc031080, 0xc031080,
     0xc031080, 0xc031080, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x2030180, 0xff, 0x1000040,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x9030980,
     0xff, 0xb030d80, 0xff, 0xff, 0x16031a80, 0xff,
     0x7030480, 0xff, 0xff, 0xff},
    // ARRAY_NEXT_ITEM
    // Code: 2
    {0x200, 0x200, 0x200, 0x200, 0x15031880, 0xff,
     0xff, 0xc031380, 0xff, 0xff, 0xc031780, 0xc031080,
     0xc031080, 0xc031080, 0xc031080, 0xc031080, 0xc031080, 0xc031080,
     0xc031080, 0xc031080, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x2030180, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x9030980,
     0xff, 0xb030d80, 0xff, 0xff, 0x16031a80, 0xff,
     0x7030480, 0xff, 0xff, 0xff},
    // ARRAY_SEPARATOR
    // Code: 3
    {0x300, 0x300, 0x300, 0x300, 0xff, 0xff,
     0x3000200, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x1000040,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // DICT
    // Code: 4
    {0x400, 0x400, 0x400, 0x400, 0x5061880, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x4000040, 0xff, 0xff},
    // DICT_END_OR_SEPARATOR
    // Code: 5
    {0x500, 0x500, 0x500, 0x500, 0xff, 0xff,
     0x8000700, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x4000040, 0xff, 0xff},
    // DICT_KEY
    // Code: 6
    {0x600, 0x600, 0x600, 0x600, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x6000800, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // DICT_KEY_BEGIN_QUOTE
    // Code: 7
    {0x700, 0x700, 0x700, 0x700, 0x5061880, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // DICT_VALUE
    // Code: 8
    {0x800, 0x800, 0x800, 0x800, 0x15051880, 0xff,
     0xff, 0xc051380, 0xff, 0xff, 0xc051780, 0xc051080,
     0xc051080, 0xc051080, 0xc051080, 0xc051080, 0xc051080, 0xc051080,
     0xc051080, 0xc051080, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0x2050180, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x9050980,
     0xff, 0xb050d80, 0xff, 0xff, 0x16051a80, 0xff,
     0x7050480, 0xff, 0xff, 0xff},
    // FALSE_1
    // Code: 9
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xa00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // FALSE_2
    // Code: 10
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xb00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // FALSE_3
    // Code: 11
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xc00, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // FALSE_4
    // Code: 12
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x40, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // NULL_1
    // Code: 13
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xe00,
     0xff, 0xff, 0xff, 0xff},
    // NULL_2
    // Code: 14
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xf00, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // NULL_3
    // Code: 15
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0x40, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // NUMBER
    // Code: 16
    {0x40, 0x40, 0x40, 0x40, 0xff, 0xff,
     0x20, 0xff, 0xa001400, 0xff, 0x1000, 0x1000,
     0x1000, 0x1000, 0x1000, 0x1000, 0x1000, 0x1000,
     0x1000, 0x1000, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x20, 0xff, 0xff},
    // NUMBER_AFTER_E_DIGIT_NOTATION
    // Code: 17
    {0x20, 0x20, 0x20, 0x20, 0xff, 0xff,
     0x20, 0xff, 0xff, 0xff, 0x1100, 0x1100,
     0x1100, 0x1100, 0x1100, 0x1100, 0x1100, 0x1100,
     0x1100, 0x1100, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x20, 0xff, 0xff},
    // NUMBER_AFTER_E_NOTATION
    // Code: 18
    {0xff, 0xff, 0xff, 0xff, 0xff, 0x1600,
     0xff, 0x1600, 0xff, 0xff, 0x1100, 0x1100,
     0x1100, 0x1100, 0x1100, 0x1100, 0x1100, 0x1100,
     0x1100, 0x1100, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // NUMBER_AFTER_HYPHEN
    // Code: 19
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1700, 0x1000,
     0x1000, 0x1000, 0x1000, 0x1000, 0x1000, 0x1000,
     0x1000, 0x1000, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // NUMBER_AFTER_PERIOD
    // Code: 20
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1500, 0x1500,
     0x1500, 0x1500, 0x1500, 0x1500, 0x1500, 0x1500,
     0x1500, 0x1500, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // NUMBER_AFTER_PERIOD_DIGIT
    // Code: 21
    {0x20, 0x20, 0x20, 0x20, 0xff, 0xff,
     0x20, 0xff, 0xff, 0xff, 0x1500, 0x1500,
     0x1500, 0x1500, 0x1500, 0x1500, 0x1500, 0x1500,
     0x1500, 0x1500, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x1200, 0xff, 0xff, 0xff, 0x20,
     0xff, 0xff, 0xff, 0xff, 0x1200, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x20, 0xff, 0xff},
    // NUMBER_AFTER_PLUS_MINUS_AFTER_E_NOTATION
    // Code: 22
    {0x40, 0x40, 0x40, 0x40, 0xff, 0xff,
     0x20, 0xff, 0xff, 0xff, 0x1600, 0x1600,
     0x1600, 0x1600, 0x1600, 0x1600, 0x1600, 0x1600,
     0x1600, 0x1600, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x20, 0xff, 0xff},
    // NUMBER_AFTER_ZERO
    // Code: 23
    {0x20, 0x20, 0x20, 0x20, 0xff, 0xff,
     0x20, 0xff, 0xa001400, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x1200, 0xff, 0xff, 0xff, 0x20,
     0xff, 0xff, 0xff, 0xff, 0x1200, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0x20, 0xff, 0xff},
    // STRING
    // Code: 24
    {0xff, 0xff, 0xff, 0xff, 0x40, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1900, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1800, 0x1800},
    // STRING_ESCAPE
    // Code: 25
    {0xff, 0xff, 0xff, 0xff, 0x1800, 0xff,
     0xff, 0xff, 0xff, 0x1800, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1800, 0xff,
     0xff, 0x1800, 0xff, 0xff, 0xff, 0x1800,
     0xff, 0x1800, 0x1800, 0xff, 0x1800, 0x1d00,
     0xff, 0xff, 0xff, 0xff},
    // TRUE_1
    // Code: 26
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0x1b00, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // TRUE_2
    // Code: 27
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0x1c00,
     0xff, 0xff, 0xff, 0xff},
    // TRUE_3
    // Code: 28
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x40, 0xff,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // UNICODE_HEX_CHAR_FIRST
    // Code: 29
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1f00, 0x1f00,
     0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00,
     0x1f00, 0x1f00, 0xff, 0x1f00, 0x1f00, 0x1f00,
     0x1f00, 0x1f00, 0x1f00, 0xff, 0xff, 0xff,
     0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // UNICODE_HEX_CHAR_LAST
    // Code: 30
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1800, 0x1800,
     0x1800, 0x1800, 0x1800, 0x1800, 0x1800, 0x1800,
     0x1800, 0x1800, 0xff, 0x1800, 0x1800, 0x1800,
     0x1800, 0x1800, 0x1800, 0xff, 0xff, 0xff,
     0x1800, 0x1800, 0x1800, 0x1800, 0x1800, 0x1800,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // UNICODE_HEX_CHAR_SECOND
    // Code: 31
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x2000, 0x2000,
     0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
     0x2000, 0x2000, 0xff, 0x2000, 0x2000, 0x2000,
     0x2000, 0x2000, 0x2000, 0xff, 0xff, 0xff,
     0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
    // UNICODE_HEX_CHAR_THIRD
    // Code: 32
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff, 0x1e00, 0x1e00,
     0x1e00, 0x1e00, 0x1e00, 0x1e00, 0x1e00, 0x1e00,
     0x1e00, 0x1e00, 0xff, 0x1e00, 0x1e00, 0x1e00,
     0x1e00, 0x1e00, 0x1e00, 0xff, 0xff, 0xff,
     0x1e00, 0x1e00, 0x1e00, 0x1e00, 0x1e00, 0x1e00,
     0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
     0xff, 0xff, 0xff, 0xff},
}};


inline static CallbackCode ToCallbackCode(uint32_t code) {
  // 4th byte.
  return static_cast<CallbackCode>((code & 0xff000000) >> 24);
}

inline static StateCode ToPushStateCode(uint32_t code) {
  // 3rd byte.
  return static_cast<StateCode>((code & 0x00ff0000) >> 16);
}

inline static StateCode ToCurrentStateCode(uint32_t code) {
  // 2nd byte.
  return static_cast<StateCode>((code & 0x0000ff00) >> 8);
}

inline static bool HasPushBit(uint32_t code) {
  // 8th bit in first byte.
  return (code & 0x80);
}

inline static bool HasPopBit(uint32_t code) {
  // 7th bit in first byte.
  return ((code & 0x40) >> 6) == 1;
}

inline static bool HasShiftBit(uint32_t code) {
  // 6th bit in first byte.
  return ((code & 0x20) >> 5) == 1;
}

inline static uint32_t CodeForToken(unsigned char c, StateCode state) {
  if (c > INT8_MAX) {
    return kParseStates[static_cast<uint8_t>(state)][44];
  }
  int index = kTokenIndexes[c];
  if (index == -1) index = 45;
  return kParseStates[static_cast<uint8_t>(state)][index];
}


inline std::optional<StateCode> ParseToken(
    char c, StateCode state, int i, std::vector<StateCode>* states_stack,
    Callback callback = nullptr) {
  uint32_t code = CodeForToken(c, state);
  if (code == 0xff) {
    code = CodeForToken(0, state);
  }

  if (code == 0xff) {
    return std::nullopt;
  }

  auto callback_code = ToCallbackCode(code);
  if (callback && callback_code > CallbackCode::NONE) {
    callback(callback_code, state, i);
  }

  if (HasPushBit(code)) {
    auto shift_code = ToPushStateCode(code);
    states_stack->push_back(shift_code);
    return ToCurrentStateCode(code);
  } else if (HasPopBit(code) && !states_stack->empty()) {
    state = states_stack->back();
    states_stack->pop_back();
    return state;
  } else if (HasShiftBit(code) && !states_stack->empty()) {
    auto shift_state = states_stack->back();
    states_stack->pop_back();
    if (auto s = ParseToken(c, shift_state, i, states_stack); s) {
      code = CodeForToken(c, shift_state);
      callback_code = ToCallbackCode(code);
      if (callback && callback_code > CallbackCode::NONE) {
        callback(callback_code, shift_state, i);
      }
      return s.value();
    } else {
      return std::nullopt;
    }
  } else {
    return ToCurrentStateCode(code);
  }
}

std::pair<bool, LineCol> Validate(std::string_view str, Callback callback) {
  StateCode state = StateCode::$;
  uint32_t code = 0;
  CallbackCode callback_code = CallbackCode::NONE;
  std::vector<StateCode> states_stack {StateCode::$};

  LineCol line_col{0, 0};
  std::size_t str_size = str.size();
  for (std::size_t i = 0; i < str_size; i++) {
    uint8_t c = str.at(i);
    if (c == '\n' || (c == '\r' &&
                      i < str_size - 1 &&
                      str.at(i + 1) != '\n')) {
      line_col.first++;
      line_col.second = 0;
    } else {
      line_col.second++;
    }

    auto s = ParseToken(c, state, i, &states_stack, callback);
    if (!s.has_value()) {
      // Invalid character.
      return {false, line_col};
    }
    state = s.value();
  }

  code = CodeForToken(32, state);
  callback_code = ToCallbackCode(code);
  auto end = ParseToken(32, state, str.size() - 1, &states_stack, callback);
  if (!end.has_value()) {
    return {false, line_col};
  }
  state = end.value();
  if (callback && callback_code > CallbackCode::NONE) {
    callback(callback_code, state, str.size() - 1);
  }

  if (state != StateCode::$) {
    return {false, line_col};
  }

  return {true, line_col};
}

}  // namespace htmlparser::json

#endif  // CPP_HTMLPARSER_VALIDATORS_JSON_H_
