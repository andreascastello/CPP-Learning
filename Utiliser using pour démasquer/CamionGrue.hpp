#pragma once
#include "Camion.hpp"
#include "Grue.hpp"

class CamionGrue : public Camion,  public Grue {

public:
	using Camion::demarrer;
	using Camion::avancer;
	using Grue::avancer;
};