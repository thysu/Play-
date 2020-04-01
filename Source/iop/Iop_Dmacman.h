#pragma once

#include "Iop_Module.h"

class CIopBios;

namespace Iop
{
	class CDmacman : public CModule
	{
	public:
		CDmacman() = default;
		virtual ~CDmacman() = default;

		std::string GetId() const override;
		std::string GetFunctionName(unsigned int) const override;
		void Invoke(CMIPS&, unsigned int) override;

	private:
		uint32 DmacRequest(CMIPS&, uint32, uint32, uint32, uint32, uint32);
		void DmacTransfer(CMIPS&, uint32);
	};
}
