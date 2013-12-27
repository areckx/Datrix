// File: Pieces.h
// Description: Create the `Pieces` class
//
// This file was originally created by Javier Lopez's tutorial at javilop.com
// under the Creative Commons - Attribution 3.0 Unported license.
// 
// Trixx in its modified form was written by Alex Loranger (areckx) 
// under the GNU General Public License v2.0 which is included in the source
// under the name `LICENSE`
// Copyright (C) 2013 Alex Loranger 
//

#ifndef _PIECES_
#define _PIECES_

// -------------------------------------------------------------------------------
// 					PIECES
// -------------------------------------------------------------------------------

class Pieces
{
	public:
// 3 methods returns some information we will need later
		int getBlockType	(int pPiece, int pRotation, int pX, int pY);
		int getXInitialPosition (int pPiece, int pRotation);
		int getYInitialPosition (int pPiece, int pRotation);
};
#endif // PIECES

/*
 * ===============================================================================
 * Return the type of a block (0 == no-block, 1 == normal block, 2 == pivot block
 *
 * Parameters:
 *
 * >> nPiece:		Piece to draw
 * >> pRotation:	1 of the 4 possible rotations
 * >> pX:		Horizontal position in blocks
 * >> pY:		Vertical position in blocks
 * ===============================================================================
 */

int Pieces::getBlockType (int nPiece, int pRotation, int pX, int pY)
{
	return mPieces [pPiece][pRotation][pX][pY];
}

/*
 * ===============================================================================
 * Returns the horizontal displacement of the piece that has to be applied in
 * order to create it in the correction position.
 *
 * Parameters:
 *
 * >> pPiece:		Piece to draw
 * >> pRotation:	1 of 4 possible rotations
 * ===============================================================================
 */

int Pieces::getXInitialPosition (int pPiece, int pRotation)
{
	return mPiecesInitialPosition [pPiece][pRotation][0];
}

/*
 * ===============================================================================
 * Returns the vertical displacement of the piece that has to be applied in order 
 * to create it in the correct position
 *
 * Parameters:
 *
 * >> pPiece:		Piece to draw
 * >> pRotation:	1 of 4 possible rotations
 * ===============================================================================
 */

int Pieces::getYInitialPosition (int pPiece, int pRotation)
{
	return mPiecesInitialPosition [pPiece][pRotation][1];
} 
