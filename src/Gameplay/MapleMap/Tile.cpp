//	This file is part of the continued Journey MMORPG client
//	Copyright (C) 2015-2019  Daniel Allendorf, Ryan Payton
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU Affero General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU Affero General Public License for more details.
//
//	You should have received a copy of the GNU Affero General Public License
//	along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include "Tile.h"

#include "../Util/NxWz.h"

namespace ms {
Tile::Tile(const nxwz::node &src, const std::string &ts) {
    nxwz::node dsrc = nxwz::nx::map["Tile"][ts][src["u"]][src["no"]];
    texture_ = Texture(nxwz::nx::map["Tile"][ts][src["u"]][src["no"]]);
    pos_ = Point<int16_t>(src["x"], src["y"]);
    z_ = dsrc["z"];

    if (z_ == 0) {
        z_ = dsrc["zM"];
    }
}

void Tile::draw(Point<int16_t> viewpos) const {
    texture_.draw(pos_ + viewpos);
}

uint8_t Tile::getz() const {
    return z_;
}
}  // namespace ms