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

#pragma once

#include "Character.hpp"

namespace ariel
{
	class Ninja : public Character
	{
		protected:
			/*
			* @brief The speed of the ninja.
			*/
			int _speed;

		public:
			/*
			* @brief Construct a new Ninja object.
			* @param name The name of the ninja.
			* @param location The starting location of the ninja.
			* @param health_points The health points of the ninja.
			* @param speed The speed of the ninja.
			*/
			Ninja(std::string name, Point location, int health_points, int speed);

			/*
			* @brief Moves the ninja to another character _speed steps closer.
			* @param other The other character.
			* @return void
			*/
			void move(Character *other);

			/*
			* @brief Slashes another character.
			* @param other The other character.
			* @return void
			* @note If the other character is alive and the distance between the two characters is less than or equal to 1, the other character is hit.
			*/
			void slash(Character *other);

			/*
			* @brief Prints the ninja.
			* @return void
			*/
			std::string print() const override;
	};

	class YoungNinja : public Ninja
	{
		public:
			/*
			* @brief Construct a new Young Ninja object.
			* @param name The name of the young ninja.
			* @param location The starting location of the young ninja.
			*/
			YoungNinja(std::string name, Point location);
	};

	class TrainedNinja : public Ninja
	{
		public:
			/*
			* @brief Construct a new Trained Ninja object.
			* @param name The name of the trained ninja.
			* @param location The starting location of the trained ninja.
			*/
			TrainedNinja(std::string name, Point location);
	};

	class OldNinja : public Ninja
	{
		public:
			/*
			* @brief Construct a new Old Ninja object.
			* @param name The name of the old ninja.
			* @param location The starting location of the old ninja.
			*/
			OldNinja(std::string name, Point location);
	};
}