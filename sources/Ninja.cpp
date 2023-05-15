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

#include "Ninja.hpp"

using namespace std;
using namespace ariel;

Ninja::Ninja(string name, Point location, int health_points, int speed) : Character(name, location, health_points), _speed(speed) {}

void Ninja::move(Character *other)
{
	return;
}

void Ninja::slash(Character *other)
{
	return;
}

string Ninja::print() const
{
	return "";
}

YoungNinja::YoungNinja(string name, Point location) : Ninja(name, location, 100, 14) {}

TrainedNinja::TrainedNinja(string name, Point location) : Ninja(name, location, 120, 12) {}

OldNinja::OldNinja(string name, Point location) : Ninja(name, location, 140, 8) {}