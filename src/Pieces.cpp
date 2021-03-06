// File: Pieces.cpp
// Description: Define the pieces and their rotation
//
// This file was originally created by Javier Lopez's tutorial at javilop.com
// under the Creative Commons - Attribution 3.0 Unported license.
// 
// Trixx in its modified form was written by Alex Loranger (areckx) 
// under the GNU General Public License v2.0 which is included in the source
// under the name `LICENSE`
// Copyright (C) 2013 Alex Loranger 
//

#include "Pieces.h"

// Pieces Defintion
char mPieces [7 /*kind*/ ][4 /*rotation*/ ][5 /*horizontal blocks*/ ][5 /*vertical blocks*/ ] =
{

// We are going to define the pieces in a `matrix` of 5x5 cells

// There are 7 different types of pieces
//
// square
// I
// L
// L-mirrored
// N
// N-mirrored
// T

// `0` means `no block`
// `1` means `normal block`
// `2` means `pivot block`


// The pivot block is the rotation point


	// START

// Square
   {
	   {
		   
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 1, 1, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 1, 1, 0},
{0, 0, 0, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 1, 1, 0},
{0, 0, 0, 0, 0}

	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 1, 1, 0},
{0, 0, 0, 0, 0}
		}
	   },


// I
{
	{
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 1, 2, 1, 1},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 2, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{1, 1, 2, 1, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 2, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}
	   },

// L

{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 2, 0, 0},
{0, 0, 1, 1, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 1, 2, 1, 0},
{0, 1, 0, 0, 0},
{0, 0, 0, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 1, 1, 0, 0},
{0, 0, 2, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 0, 1, 0},
{0, 1, 2, 1, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}
		}
	   },

// L mirrored

   {
	   {
		   
{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 2, 0, 0},
{0, 1, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 1, 0, 0, 0},
{0, 1, 2, 1, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 1, 1, 0},
{0, 0, 2, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 1, 2, 1, 0},
{0, 0, 0, 1, 0},
{0, 0, 0, 0, 0}
		}
	   },

// N

   {
	   {
		   
{0, 0, 0, 0, 0},
{0, 0, 0, 1, 0},
{0, 0, 2, 1, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 1, 2, 0, 0},
{0, 0, 1, 1, 0},
{0, 0, 0, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 1, 2, 0, 0},
{0, 1, 0, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {

{0, 0, 0, 0, 0},
{0, 1, 1, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}
		}
	   },

// N mirrored

   {
	   {
		   
{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 0, 1, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 2, 1, 0},
{0, 1, 1, 0, 0},
{0, 0, 0, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 1, 0, 0, 0},
{0, 1, 2, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 1, 1, 0},
{0, 1, 2, 0, 0},
{0, 0, 0, 1, 0},
{0, 0, 0, 0, 0}
		}
	   },
// T

   {
	   {
		   
{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 2, 1, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 1, 2, 1, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}
 	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 1, 2, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 0, 0, 0}

	   },
	   {

{0, 0, 0, 0, 0},
{0, 0, 1, 0, 0},
{0, 1, 2, 1, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}
		}
	   },
};



// Displacement of the piece to the position where it is first drawn
// in the board when it is created
int mPiecesInitialPosition [7 /*kind*/ ][4 /*rotation*/ ][2 /*position*/ ] =
{
	// Square
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -3}
	},
	// I
	{
		{-2, -2},
		{-2, -3},
		{-2, -2},
		{-2, -3}
	},
	// L
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -2}
	},
	// L mirrored
	{
		{-2. -3},
		{-2, -2},
		{-2, -3},
		{-2, -3}
	},
	// N
	{
		{-2, -3},
		{-2, -3},
		{-2. -3},
		{-2, -2}
	},
	// N mirrored
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -2}
	},
	// T
	{
		{-2. -3},
		{-2, -3},
		{-2, -3},
		{-2, -2}
	},
};


