/*
 *  Software Systems CPP Course Assignment 4
 *  Copyright (C) 2023  Roy Simanovich
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "Character.hpp"

using namespace std;
using namespace ariel;

Character::Character(string name, Point &location, int health_points) : _name(name), _location(location), _hp(health_points), _inteam(false) {}

bool Character::isAlive() const
{
	return false;
}

double Character::distance(Character *other) const
{
	return 0.0;
}

void Character::hit(int power)
{
	return;
}

string Character::getName() const
{
	return "";
}

const Point& Character::getLocation() const
{
	return _location;
}

void Character::setLocation(Point &location)
{
	return;
}

bool Character::isInTeam() const
{
	return false;
}

void Character::setInTeam(bool in_team)
{
	return;
}

int Character::getHP() const
{
	return 0;
}