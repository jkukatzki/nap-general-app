// Local Includes
#include "generalservice.h"

// External Includes
#include <nap/core.h>
#include <nap/resourcemanager.h>
#include <nap/logger.h>
#include <iostream>

RTTI_BEGIN_CLASS_NO_DEFAULT_CONSTRUCTOR(nap::GeneralService)
	RTTI_CONSTRUCTOR(nap::ServiceConfiguration*)
RTTI_END_CLASS

namespace nap
{
	bool GeneralService::init(nap::utility::ErrorState& errorState)
	{
		//Logger::info("Initializing GeneralService");
		return true;
	}


	void GeneralService::update(double deltaTime)
	{
	}
	

	void GeneralService::getDependentServices(std::vector<rtti::TypeInfo>& dependencies)
	{
	}
	

	void GeneralService::shutdown()
	{
	}
}
