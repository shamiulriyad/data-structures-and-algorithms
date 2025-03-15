#include <iostream>
#include <string>
#include <vector>

class CarProperty {
public:
	std::string companyName;
	std::string modelName;
	std::string licenseNo;
	std::string fuelType;
	float speed;

	void SetProperty(std::string name, std::string model, std::string license, std::string fuel, float fSpeed);
};

void CarProperty::SetProperty(std::string name, std::string model, std::string license, std::string fuel, float fSpeed)
{
	companyName = name;
	modelName = model;
	licenseNo = license;
	fuelType = fuel;
	speed = fSpeed;
}

int main()
{
	std::vector<CarProperty>CarsInfo;

	CarProperty Car;
	Car.SetProperty("Toyota", "Supra", "skdfjs", "Gas", 120);	//Setter

	CarsInfo.push_back(Car)
;

	//CarsInfo.erase(CarsInfo.begin() + 2);
	return 0;
}