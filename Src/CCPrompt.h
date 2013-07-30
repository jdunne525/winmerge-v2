/////////////////////////////////////////////////////////////////////////////
//    License (GPLv2+):
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful, but
//    WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
/////////////////////////////////////////////////////////////////////////////
/** 
 * @file  CCPrompt.h
 *
 * @brief Declaration file for ClearCase dialog.
 *
 */
// ID line follows -- this is updated by SVN
// $Id$

#pragma once

#include <boost/scoped_ptr.hpp>
#include "UnicodeString.h"

class CCCPrompt
{
// Construction
public:
	CCCPrompt();
	~CCCPrompt();
	int DoModal();

	String	m_comments;
	bool m_bMultiCheckouts;
	bool m_bCheckin;

private:
	CCCPrompt(const CCCPrompt &);
	CCCPrompt & operator=(const CCCPrompt &);

	class Impl;
	boost::scoped_ptr<Impl> m_pimpl;
};