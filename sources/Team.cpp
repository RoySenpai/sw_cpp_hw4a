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

#include "Team.hpp"

using namespace std;
using namespace ariel;

Character *Team::_find_victim(Team *other)
{
	return nullptr;
}

Team::Team(Character *leader) : _leader(leader), _size(1)
{
	_members.push_back(leader);
}

Team::~Team()
{
	Cowboy *c = nullptr;
	Ninja *n = nullptr;

	while (_members.size() > 0)
	{
		Character *tmp = _members.back();
		_members.pop_back();
		
		c = dynamic_cast<Cowboy *>(tmp);
		n = dynamic_cast<Ninja *>(tmp);

		if (c != nullptr)
		{
			delete c;
		}

		else if (n != nullptr)
		{
			delete n;
		}
	}
}

void Team::add(Character *member)
{
	return;
}

void Team::attack(Team *other)
{
	return;
}

int Team::stillAlive() const
{
	return 0;
}

Character *Team::getMember(int index) const
{
	return nullptr;
}

int Team::getSize() const
{
	return 0;
}

void Team::print() const
{
	return;
}

Team2::Team2(Character *leader) : Team(leader) {}

void Team2::attack(Team *other)
{
	return;
}

void Team2::print() const
{
	return;
}

SmartTeam::SmartTeam(Character *leader) : Team(leader) {}

void SmartTeam::attack(Team *other)
{
	return;
}

void SmartTeam::print() const
{
	return;
}