#include "node.h"
#include "audio.h"
#include "bitmap.h"
namespace nxwz
{
node node::begin() const { return node(); }
node node::end() const { return node(); }
node node::operator*() const { return node(); }
node& node::operator++() { return *new node(); }
node node::operator++(int) { return node(); }
bool node::operator==(node const&) const { return false; }
bool node::operator!=(node const&) const { return false; }
bool node::operator<(node const&) const { return false; }
node::operator bool() const { return false; }
node node::operator[](unsigned int) const { return node(); }
node node::operator[](signed int) const { return node(); }
node node::operator[](unsigned long) const { return node(); }
node node::operator[](signed long) const { return node(); }
node node::operator[](unsigned long long) const { return node(); }
node node::operator[](signed long long) const { return node(); }
node node::operator[](std::string const&) const { return node(); }
node node::operator[](char const*) const { return node(); }
node node::operator[](node const&) const { return node(); }
node::operator unsigned char() const { return '0'; }
node::operator signed char() const { return '0'; }
node::operator unsigned short() const { return 0; }
node::operator signed short() const { return 0; }
node::operator unsigned int() const { return 0; }
node::operator signed int() const { return 0; }
node::operator unsigned long() const { return 0; }
node::operator signed long() const { return 0; }
node::operator unsigned long long() const { return 0; }
node::operator signed long long() const { return 0; }
node::operator float() const { return 0; }
node::operator double() const { return 0; }
node::operator long double() const { return 0; }
node::operator std::string() const { return ""; }
node::operator vector2i() const { return vector2i(); }
node::operator bitmap() const { return bitmap(); }
node::operator audio() const { return audio(); }
int64_t node::get_integer(int64_t) const { return 0; }
double node::get_real(double) const { return 0; }
std::string node::get_string(std::string) const { return ""; }
vector2i node::get_vector(vector2i) const { return vector2i(); }
bitmap node::get_bitmap() const { return bitmap(); }
audio node::get_audio() const { return audio(); }
bool node::get_bool() const { return false; }
bool node::get_bool(bool) const { return false; }
int32_t node::x() const { return 0; }
int32_t node::y() const { return 0; }
std::string node::name() const { return ""; }
size_t node::size() const { return 0; }
node::type node::data_type() const { return node::type::none; }
node node::root() const { return node(); }
node node::resolve(std::string) const { return node(); }
node node::get_child(char const*, uint16_t) const {}
int64_t node::to_integer() const {}
double node::to_real() const {}
std::string node::to_string() const {}
vector2i node::to_vector() const {}
bitmap node::to_bitmap() const {}
audio node::to_audio() const {}
    
    
}