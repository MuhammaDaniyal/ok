/*

	Name : Muhammad Daniyal
	Section : CS-F
	Roll No. 23I-0579
	Instructor : Mam Mariyam Hida
	TA Name : Ariyan Chaudary / Muhammad Abdur Rafay

*/

#include <iostream>
#include "Q1.h"
using namespace std;


int main()
{


	int addersALU, subtractorsALU, registersALU, sizeOfRegALU,
		clockCU,
		capacityPM,
		capacityMM,
		baudRate1PORT, baudRate2PORT, baudRate3PORT, baudRate4PORT,
		storageCapacity , 
		graphicCapacity,
		networkSpeed,
		powerWatt,
		batteryCap,
		PhyMemorycapacity;
	
	double	storagePrice,
		graphicPrice, networkPrice, powerPrice,
		casePrice;

	string 
		pcName,
		CPUType,	
		networkType,
		storageType,
		powerEff,
		graphicBrand,
		technologyTypeMM,
		caseFormFactor, caseColor,
	 type1PORT, type2PORT, type3PORT, type4PORT;

	int comp;

	comp = Computer::checkValid();




	if (comp == 1)			//PC
	{

		PowerSupply::checkValid(powerEff, powerWatt, powerPrice);
		Case::checkValid(caseFormFactor, caseColor, casePrice);
		NetworkCard::checkValid(networkType, networkSpeed, networkPrice);
		GraphicsCard::checkValid(graphicBrand, graphicCapacity, graphicPrice);

		ALU::checkValid(addersALU, subtractorsALU, registersALU, sizeOfRegALU);
		ControlUnit::checkValid(clockCU);				
		CPU::checkValid(CPUType);

		PhysicalMemory::checkValid(PhyMemorycapacity);
		StorageDevice::checkValid(storageType, storageCapacity, storagePrice);
		MainMemory::checkValid(capacityMM, technologyTypeMM);

		Port::checkValid(type1PORT, type2PORT, type3PORT, type4PORT, baudRate1PORT, baudRate2PORT, baudRate3PORT, baudRate4PORT);



		GraphicsCard g1(graphicBrand, graphicCapacity, graphicPrice) ;
		PhysicalMemory m1(PhyMemorycapacity) ;
		MotherBoard MB1(capacityMM,technologyTypeMM,type1PORT,type2PORT,type3PORT,type4PORT,baudRate1PORT,baudRate2PORT,baudRate3PORT,baudRate4PORT) ;

		PC pc(addersALU, subtractorsALU, registersALU, sizeOfRegALU, clockCU, CPUType, networkType, networkSpeed, networkPrice, powerWatt
			, powerEff, powerPrice, casePrice, caseFormFactor, caseColor, m1, MB1, g1);

		pc.display();
	}
	else if (comp == 2)						//Mac
	{


		ALU::checkValid(addersALU, subtractorsALU, registersALU, sizeOfRegALU);
		ControlUnit::checkValid(clockCU);

		NetworkCard::checkValid(networkType, networkSpeed, networkPrice);
		PowerSupply::checkValid(powerEff, powerWatt, powerPrice);
		Case::checkValid(caseFormFactor, caseColor, casePrice);

		PhysicalMemory::checkValid(PhyMemorycapacity);
		StorageDevice::checkValid(storageType, storageCapacity, storagePrice);
		MainMemory::checkValid(capacityMM, technologyTypeMM);

		Port::checkValid(type1PORT, type2PORT, type3PORT, type4PORT, baudRate1PORT, baudRate2PORT, baudRate3PORT, baudRate4PORT);

		

		PhysicalMemory m2(PhyMemorycapacity);
		MotherBoard MB2(capacityMM, technologyTypeMM, type1PORT, type2PORT, type3PORT, type4PORT, baudRate1PORT, baudRate2PORT, baudRate3PORT, baudRate4PORT);


		string name = "Apple Silicon", name2 = "Apple GPU";
		graphicCapacity = 300;
		graphicPrice = 9000;
		Mac mac(addersALU, subtractorsALU, registersALU, sizeOfRegALU, clockCU ,name, name2, graphicCapacity, graphicPrice,
			networkType, networkSpeed, networkPrice, powerWatt, powerEff, powerPrice, casePrice, caseFormFactor , caseColor , m2, MB2);

		mac.display();
	}
	else if (comp == 3)						//Laptop
	{

		ALU::checkValid(addersALU, subtractorsALU, registersALU, sizeOfRegALU);
		ControlUnit::checkValid(clockCU);
		CPU::checkValid(CPUType);

		GraphicsCard::checkValid(graphicBrand, graphicCapacity, graphicPrice);
		NetworkCard::checkValid(networkType, networkSpeed, networkPrice);
		Battery::checkValid(batteryCap);

		PhysicalMemory::checkValid(PhyMemorycapacity);
		StorageDevice::checkValid(storageType, storageCapacity, storagePrice);
		MainMemory::checkValid(capacityMM, technologyTypeMM);

		Port::checkValid(type1PORT, type2PORT, type3PORT, type4PORT, baudRate1PORT, baudRate2PORT, baudRate3PORT, baudRate4PORT);



		PhysicalMemory m3(PhyMemorycapacity);
		MotherBoard MB3(capacityMM, technologyTypeMM, type1PORT, type2PORT, type3PORT, type4PORT, baudRate1PORT, baudRate2PORT, baudRate3PORT, baudRate4PORT);
		GraphicsCard g3(graphicBrand, graphicCapacity, graphicPrice);


		Laptop laptop(addersALU, subtractorsALU, registersALU, sizeOfRegALU, clockCU, CPUType, networkType, networkSpeed, networkPrice
			, batteryCap , m3, MB3, g3);

		laptop.display();
	}

	return 0;
}