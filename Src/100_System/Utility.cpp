#include "stdafx.h"
#include "Utility.h"
#include "FileSystem.h"

namespace core
{
	CCurrentDirectorySettter::~CCurrentDirectorySettter(void)
	{
		core::SetCurrentDirectoryW(m_strOriginalDir.c_str());
	}
}