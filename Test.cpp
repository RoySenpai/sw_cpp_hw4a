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

#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;

TEST_CASE("Test case 1: Point class")
{
	Point p1(1, 2), p2(3, 4), p3(5, 6);

	CHECK(p1.getX() == 1);
	CHECK(p1.getY() == 2);

	CHECK(p2.getX() == 3);
	CHECK(p2.getY() == 4);

	CHECK(p3.getX() == 5);
	CHECK(p3.getY() == 6);

	CHECK_EQ(p1.distance(p2), p2.distance(p1));
	CHECK_EQ(p1.distance(p2), 2.8284271247461903);
	CHECK_EQ(p1.distance(p3), 5.656854249492381);
	CHECK_EQ(p2.distance(p3), 2.8284271247461903);

	CHECK_NOTHROW(Point::moveTowards(p1, p2, 1));
}

TEST_CASE("Test 2: Charcters creation")
{
	Cowboy c1("Cowby", Point(1, 2));
	YoungNinja c2("Young Ninja", Point(3, 4));
	TrainedNinja c3("Trained Ninja", Point(5, 6));
	OldNinja c4("Old Ninja", Point(7, 8));

	CHECK_EQ(c1.getName(), "Cowby");
	CHECK_EQ(c1.getHP(), 100);

	CHECK_EQ(c2.getName(), "Young Ninja");
	CHECK_EQ(c2.getHP(), 100);

	CHECK_EQ(c3.getName(), "Trained Ninja");
	CHECK_EQ(c3.getHP(), 120);

	CHECK_EQ(c4.getName(), "Old Ninja");
	CHECK_EQ(c4.getHP(), 150);

	CHECK_EQ(c1.getLocation().getX(), 1);
	CHECK_EQ(c1.getLocation().getY(), 2);

	CHECK_EQ(c2.getLocation().getX(), 3);
	CHECK_EQ(c2.getLocation().getY(), 4);

	CHECK_EQ(c3.getLocation().getX(), 5);
	CHECK_EQ(c3.getLocation().getY(), 6);

	CHECK_EQ(c4.getLocation().getX(), 7);
	CHECK_EQ(c4.getLocation().getY(), 8);

	CHECK_EQ(c1.isAlive(), true);
	CHECK_EQ(c2.isAlive(), true);
	CHECK_EQ(c3.isAlive(), true);
	CHECK_EQ(c4.isAlive(), true);

	CHECK_EQ(c1.print(), "Name: C(Cowby), HP: 100, Location: (1,2)");
	CHECK_EQ(c2.print(), "Name: Y(Young Ninja), HP: 100, Location: (3,4)");
	CHECK_EQ(c3.print(), "Name: T(Trained Ninja), HP: 120, Location: (5,6)");
	CHECK_EQ(c4.print(), "Name: O(Old Ninja), HP: 150, Location: (7,8)");

	CHECK_NOTHROW(c2.move(&c3));
	CHECK_NOTHROW(c3.move(&c2));
	CHECK_NOTHROW(c4.move(&c1));
}

TEST_CASE("Test 3: Test teams")
{
	Cowboy *c1 = new Cowboy("Cowby", Point(1, 2));
	YoungNinja *c2 = new YoungNinja("Young Ninja", Point(3, 4));
	TrainedNinja *c3 = new TrainedNinja("Trained Ninja", Point(5, 6));
	OldNinja *c4 = new OldNinja("Old Ninja", Point(7, 8));

	Team t1(c1), t2(c3);

	t1.add(c2);
	t2.add(c4);

	CHECK_EQ(t1.getSize(), 2);
	CHECK_EQ(t2.getSize(), 2);

	CHECK_THROWS(t1.add(c1));
	CHECK_THROWS(t1.add(c3));

	CHECK_THROWS(t1.getMember(4));

	CHECK_NOTHROW(t1.getMember(0));
}

TEST_CASE("Test 4: Fights")
{
	Cowboy c1("Cowby", Point(0, 0));
	YoungNinja c2("Young Ninja", Point(0, 1));

	CHECK_NOTHROW(c1.shoot(&c2));
	CHECK_EQ(c2.getHP(), 90);
	CHECK_NOTHROW(c2.slash(&c1));
	CHECK_EQ(c1.getHP(), 60);
}