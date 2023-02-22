#pragma once
#include "common.h"
namespace nxwz
{
struct _file_data;
typedef std::pair<int32_t, int32_t> vector2i;
class node
{
public:
    using difference_type = ptrdiff_t;
    using value_type = node;
    using pointer = node;
    using reference = node&;
    using iterator_category = std::random_access_iterator_tag;
    struct data;
    enum class type : uint16_t {
        none = 0,
        integer = 1,
        real = 2,
        string = 3,
        vector = 4,
        bitmap = 5,
        audio = 6,
    };
    node() = default;
    node(wz::File *file, wz::Node *node):m_file(file),m_node(node) {};
    node(node const& o) :
        m_file(o.m_file), m_node(o.m_node) {}
    node& operator=(node const&) = default;
    node begin() const;
    node end() const;
    node operator*() const;
    node& operator++();
    node operator++(int);
    bool operator==(node const&) const;
    bool operator!=(node const&) const;
    bool operator<(node const&) const;
    explicit operator bool() const;
    node operator[](unsigned int) const;
    node operator[](signed int) const;
    node operator[](unsigned long) const;
    node operator[](signed long) const;
    node operator[](unsigned long long) const;
    node operator[](signed long long) const;
    node operator[](std::string const&) const;
    node operator[](char const*) const;
    node operator[](node const&) const;
    operator unsigned char() const;
    operator signed char() const;
    operator unsigned short() const;
    operator signed short() const;
    operator unsigned int() const;
    operator signed int() const;
    operator unsigned long() const;
    operator signed long() const;
    operator unsigned long long() const;
    operator signed long long() const;
    operator float() const;
    operator double() const;
    operator long double() const;
    operator std::string() const;
    operator vector2i() const;
    operator bitmap() const;
    operator audio() const;
    int64_t get_integer(int64_t = 0) const;
    double get_real(double = 0) const;
    std::string get_string(std::string = "") const;
    vector2i get_vector(vector2i = { 0, 0 }) const;
    bitmap get_bitmap() const;
    audio get_audio() const;
    bool get_bool() const;
    bool get_bool(bool) const;
    int32_t x() const;
    int32_t y() const;
    std::string name() const;
    size_t size() const;
    type data_type() const;
    node root() const;
    node resolve(std::string) const;

private:
    node get_child(char const*, uint16_t) const;
    int64_t to_integer() const;
    double to_real() const;
    std::string to_string() const;
    vector2i to_vector() const;
    bitmap to_bitmap() const;
    audio to_audio() const;
    // from wzlibcpp
    wz::File *m_file = nullptr;
    wz::Node *m_node = nullptr;
};

inline std::string operator+(std::string, node) {
    return "";
}
inline std::string operator+(char const*, node) {
    return "";
}
inline std::string operator+(node, std::string) {
    return "";
}
inline std::string operator+(node, char const*) {
    return "";
}


namespace nx
{
    static nxwz::node base, character, effect, etc, item, map, mapPretty, mapLatest, map001, mob, morph, npc, quest, reactor, skill, sound, string, tamingmob, ui;
    inline void load_all(){};
}

}