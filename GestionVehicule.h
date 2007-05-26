#pragma once

class GestionVehicule
{
private:
	GestionVehicule(void);
	~GestionVehicule(void);
	static GestionVehicule* instance;

public:
	static GestionVehicule* getinstance();

};
