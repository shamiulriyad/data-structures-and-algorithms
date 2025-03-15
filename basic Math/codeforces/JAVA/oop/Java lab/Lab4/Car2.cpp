#include <iostream>
#include <string>
#include <vector>

class CarProperty {
private:
	std::string companyName;
	std::string modelName;
	std::string licenseNo;
	std::string fuelType;
	float speed;

public:
	CarProperty(std::string name, std::string model);
	void SetProperty(std::string fuel, float fSpeed);
	void SetLicense(std::string license);
};

CarProperty::CarProperty(std::string name, std::string model)
{
	companyName = name;
	modelName = model;
}

void CarProperty::SetProperty(std::string fuel, float fSpeed)
{
	fuelType = fuel;
	speed = fSpeed;
}

void CarProperty::SetLicense(std::string license)
{
	licenseNo = license;
}

int main()
{
	CarProperty Car("Toyota", "Supra");
	Car.SetProperty("Oil", 120.0);
	Car.SetLicense("ksfjskdf");
	//Car.SetProperty("Toyota", "Supra", "skdfjs", "Gas", 120);	//Setter
	return 0;
}