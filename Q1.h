#pragma once
#include <iostream>
using namespace std;


bool intCheck(double num)
{
	if (num == (int)num)	return 1;
	return 0;
}
bool powerOfTwo(int num)
{
	if (num == 1)		return 1;

	while (num != 1)
	{
		if (num % 2 != 0)
			return 0;

		num = num / 2;
	}
	return 1;
}
bool negAndZero(int num)
{
	if (num <= 0)
		return 0;
	return 1;
}


class GraphicsCard {
	string brand;
	int memorySize;
	double price;

public:

	GraphicsCard(string Brand = "", int Size = 0, double Price = 0)
	{
		brand = Brand;
		memorySize = Size;
		price = Price;
	}

	int getMemorySize()
	{
		return memorySize;
	}
	string getBrand()
	{
		return brand;
	}
	double getPrice()
	{
		return price;
	}

	void setMemorySize(int size)
	{
		memorySize = size;
	}
	void setBrand(string Brand)
	{
		brand = Brand;
	}
	void getPrice(double Price)
	{
		price = Price;
	}

	void static checkValid(string& aBrand, int& aSize, double& aPrice)
	{
		cout << "---------------------Graphics Card---------------------\n";
		do {
			cout << "Enter the brand of graphics card ( Nvidia/AMD  ): ";
			cin >> aBrand;
		} while (aBrand == "Nvidia" ? 0 : aBrand == "AMD" ? 0 : 1);

		do {
			cout << "Enter the size of Card: ";
			cin >> aSize;
		} while (!intCheck(aSize) || !negAndZero(aSize) || !powerOfTwo(aSize));

		do {
			cout << "Enter the price of Card: ";
			cin >> aPrice;
		} while (!negAndZero(aPrice));

	
	}



};

class NetworkCard {

	string type;
	int speed;
	double price;

public:

	NetworkCard(string Type = "", int Speed = 0, double Price = 0)
	{
		type = Type;
		speed = Speed;
		price = Price;
	}

	string getType()
	{
		return type;
	}
	int getSpeed()
	{
		return speed;
	}
	double getPrice()
	{
		return price;
	}

	void setType(string Type)
	{
		type = Type;
	}
	void setSpeed(int Speed)
	{
		speed = Speed;
	}
	void getPrice(double Price)
	{
		price = Price;
	}


	void static checkValid(string& aType, int& aSpeed, double& aPrice)
	{
		cout << "---------------------Network Card---------------------\n";
		do {
			cout << "Enter the type of Network card ( Ethernet/Wi-Fi ): ";
			cin >> aType;
		} while (aType == "Ethernet" ? 0 : aType == "Wi-Fi" ? 0 : 1);

		do {
			cout << "Enter the speed of Card: ";
			cin >> aSpeed;
		} while (!intCheck(aSpeed) || !negAndZero(aSpeed) || !powerOfTwo(aSpeed));

		do {
			cout << "Enter the price of Card: ";
			cin >> aPrice;
		} while (!negAndZero(aPrice));


	}


};

class PowerSupply {
	int wattage;
	string efficiencyRating;
	double price;

public:

	PowerSupply() :wattage(0), efficiencyRating(""), price(0) {}
	PowerSupply(int Wattage, string EfficiencyRating, double Price) :wattage(Wattage), efficiencyRating(EfficiencyRating), price(Price) {}

	int getWattage()
	{
		return wattage;
	}
	string getEfficiencyRating()
	{
		return efficiencyRating;
	}
	double getPrice()
	{
		return price;
	}

	void setWattage(int watt)
	{
		wattage = watt;
	}
	void setEfficiencyRating(string rate)
	{
		efficiencyRating = rate;
	}
	void getPrice(double Price)
	{
		price = Price;
	}

	void static checkValid(string& aEfficiencyRating, int& aWattage, double& aPrice)
	{
		cout << "---------------------Power Supply---------------------\n";
		do {
			cout << "Enter the type of Power Supply (  80PlusBronze/80PlusGold ): ";
			cin >> aEfficiencyRating;
		} while (aEfficiencyRating == "80PlusBronze" ? 0 : aEfficiencyRating == "80PlusGold" ? 0 : 1);

		do {
			cout << "Enter the wattage: ";
			cin >> aWattage;
		} while (!intCheck(aWattage) || !negAndZero(aWattage) || !powerOfTwo(aWattage));

		do {
			cout << "Enter the price: ";
			cin >> aPrice;
		} while (!negAndZero(aPrice));


	}


};

class Battery {
	int capacity;

public:

	Battery(int Cap = 0) :capacity(Cap) {}

	void setCapacity(int cap)
	{
		capacity = cap;
	}
	int getCapacity()
	{
		return capacity;
	}

	void static checkValid(int& aCapacity)
	{
		cout << "---------------------Battery---------------------\n";
		do {
			cout << "Enter the capacity: ";
			cin >> aCapacity;
		} while (!intCheck(aCapacity) || !negAndZero(aCapacity) || !powerOfTwo(aCapacity));

	}

};

class Case {

	int price;
	string formFactor;
	string color;

public:

	Case(string fac = "", string col = "", int aPrice = 0) :formFactor(fac), color(col), price(aPrice) {}

	void setFormFactor(string fac)
	{
		formFactor = fac;
	}
	void setColor(string col)
	{
		color = col;
	}

	string getFormFactor()
	{
		return formFactor;
	}
	string getColor()
	{
		return color;
	}

	void static checkValid(string& aFormFactor, string& aColor, double& aPrice)
	{
		cout << "---------------------Case---------------------\n";
		do {
			//cin.ignore();
			cout << "Enter the form factor: ( ATX / MicroATX): ";
			cin >> aFormFactor;
		} while (aFormFactor == "ATX" ? 0 : aFormFactor == "Micro ATX" ? 0 : 1);

		do {
			cin.ignore();
			cin.get();
			cout << "Enter the color: ( Black/White/Red/Orange/Purple): ";
			cin >> aColor;
		} while (aColor == "Black" ? 0 : aColor == "White" ? 0 : aColor == "Red" ? 0 :
			aColor == "Orange" ? 0 : aColor == "Purple" ? 0 : 1);	

	}


};


class ALU {
	int NoOfAdders;
	int NoOfSubtractors;
	int NoOfRegisters;
	int sizeOfRegisters;
public:

	ALU( int adders = 0 , int subtractors = 0 , int registers = 0 , int sizeReg = 0 )
	{
		NoOfAdders = adders;
		NoOfSubtractors = subtractors;
		NoOfRegisters = registers;
		sizeOfRegisters = sizeReg;
	}

	int getNoOfAdders()
	{
		return NoOfAdders; 
	}
	int getNoOfSubtractors()
	{
		return NoOfSubtractors; 
	}
	int getNoOfRegisters()	
	{
		return NoOfRegisters; 
	}
	int getSizeOfRegisters()
	{
		return sizeOfRegisters; 
	}

	void setNoOfAdders(int adders)		
	{
		NoOfAdders = adders; 
	}
	void setNoOfSubtractors(int substractor)
	{
		NoOfSubtractors = substractor; 
	}
	void setNoOfRegisters(int Reg)				
	{
		NoOfRegisters = Reg; 
	}
	void setSizeOfRegisters(int size)
	{
		sizeOfRegisters = size; 
	}

	void static checkValid( int& addersALU, int& subtractorsALU, int& registersALU, int& sizeOfRegALU)
	{
		cout << "---------------------ALU---------------------\n";
		do {
			cin.ignore();
			addersALU = 0;
			cout << "Enter the number of adders in ALU: ";
			cin >> addersALU;
		} while (!intCheck(addersALU) || !negAndZero(addersALU));

		do {
			cout << "Enter the number of subtractor in ALU: ";
			cin >> subtractorsALU;
		} while (!intCheck(subtractorsALU) || !negAndZero(subtractorsALU));

		do {
			cout << "Enter the number of registers in ALU: ";
			cin >> registersALU;
		} while (!intCheck(registersALU) || !negAndZero(registersALU));

		do {
			cout << "Enter the size of registers in ALU: ";
			cin >> sizeOfRegALU;
		} while (!intCheck(sizeOfRegALU) || !negAndZero(sizeOfRegALU) || !powerOfTwo(sizeOfRegALU));

	}

};

class ControlUnit {
	float clock;
public:
	ControlUnit() :clock(0){}

	ControlUnit(float time)
	{
		clock = time;	
	}

	float getClock()
	{
		return clock; 
	}
	void setClock(float time)
	{
		clock = time; 
	}

	void static checkValid(int& clockCU)
	{
		cout << "---------------------Control Unit---------------------\n";

		do {
			cout << "Enter the clock of Control Unit: ";
			cin >> clockCU;
		} while (!intCheck(clockCU) || !negAndZero(clockCU));

	}

};

class CPU {
	string theName;
	ALU alu;
	ControlUnit cu;

public:

	CPU( ALU& Alu ,ControlUnit& Cu ):alu(Alu), cu(Cu){}
	CPU(int adders = 0, int subtractors = 0, int registers = 0, int sizeReg = 0, int Clock = 0 , string aName = "")
	{
		theName = aName;
		alu.setNoOfAdders(adders);
		alu.setNoOfRegisters(registers);
		alu.setNoOfSubtractors(subtractors);
		alu.setSizeOfRegisters(sizeReg);
		cu.setClock(Clock);
	}

	string getCpuName()
	{
		return theName;
	}
	void setCpuName(string aName)
	{
		theName = aName;
	}

	void setName(string name)
	{
		theName = name;
	}

	void setalu(int adders, int subtractors, int registers , int sizeReg )
	{
		alu.setNoOfAdders(adders);
		alu.setNoOfSubtractors(subtractors);
		alu.setNoOfRegisters(registers);
		alu.setSizeOfRegisters(sizeReg);
	}
	void setcu( int Clock )
	{
		cu.setClock(Clock);
	}

	void setClassCu( ControlUnit Cu )
	{
		cu.setClock(Cu.getClock());
	}
	void setClassAlu(ALU Alu)
	{
		alu.setNoOfAdders(Alu.getNoOfAdders());
		alu.setNoOfSubtractors(Alu.getNoOfSubtractors());
		alu.setNoOfRegisters(Alu.getNoOfRegisters());
		alu.setSizeOfRegisters(Alu.getSizeOfRegisters());

	}

	ALU getalu() const
	{
		return alu; 
	}
	ControlUnit getcu() const 
	{
		return cu; 
	}

	void static checkValid(string& CPUType)
	{
		cout << "--------------------- CPU ---------------------\n";
		do {
			cout << "Enter the Type/Name of CPU (Intel/AMD): ";
			cin >> CPUType;
		} while (CPUType == "Intel" ? 0 : CPUType == "AMD" ? 0 : 1 ); //|| !powerOfTwo(sizeOfRegALU));

	}



};

class AppleSilicon : public CPU {
	GraphicsCard graphCard;
public:
	AppleSilicon(int adders = 0, int subtractors = 0, int registers = 0, int sizeReg = 0, string brand="", int Clock = 0, string aName = "", int memory=0, double price=0)
		:graphCard(brand,memory,price), CPU(adders, subtractors, registers, sizeReg, Clock, aName) {}

	void setClass(GraphicsCard aGraphCard)
	{
		graphCard = aGraphCard;
	}
	GraphicsCard& getClass()
	{
		return graphCard;
	}

};

class Intel_AMD : public CPU {
public:
	Intel_AMD(int adders = 0, int subtractors = 0, int registers = 0, int sizeReg = 0, int Clock = 0, string aName = ""):
		CPU(adders, subtractors , registers, sizeReg, Clock, aName){}

};




class PhysicalMemory {
	int capacity;

public:
	PhysicalMemory()
	{
		capacity = 0; 
	}
	PhysicalMemory(int cap)
	{
		capacity = cap; 
	}

	void setCapacity(int cap)
	{
		capacity = cap; 
	}
	int getCapacity() 
	{
		return capacity; 
	}

	void static checkValid(int& capacityPM)
	{
		cout << "---------------------Physical Memory---------------------\n";
	
		do {
			cout << "Enter the capacity of Physical Memory: ";
			cin >> capacityPM;
		} while (!intCheck(capacityPM) || !negAndZero(capacityPM) || !powerOfTwo(capacityPM));
	}


};

class StorageDevice : public PhysicalMemory{

	string type;
	double price;

public:

	StorageDevice(string Type = "", int Cap = 0, double Price = 0):PhysicalMemory(Cap)
	{
		type = Type;
		price = Price;
	}

	string getType() 
	{
		return type; 
	}
	double getPrice() 
	{
		return price; 
	}

	void setType(string Type)
	{
		type = Type; 
	}
	void getPrice(double Price)
	{
		price = Price; 
	}


	void static checkValid(string& aType, int& aCapacity, double& aPrice)
	{
		cout << "---------------------Storage Device---------------------\n";
		do {
			cout << "Enter the type of device( SSD/HDD ): ";
			cin >> aType;
		} while (aType == "SSD" ? 0 : aType == "HDD" ? 0 : 1);

		do {
			cout << "Enter the capacity of device: ";
			cin >> aCapacity;
		} while (!intCheck(aCapacity) || !negAndZero(aCapacity) || !powerOfTwo(aCapacity));

		do {
			cout << "Enter the price of Card: ";
			cin >> aPrice;
		} while (!negAndZero(aPrice));


	}


};

class MainMemory : public PhysicalMemory {

	int capacity;
	string technologyType;

public:
	MainMemory( int cap = 0 , string tech = "")
	{
		capacity = cap;
		technologyType = tech;
	}

	void setCapacity(int cap) 
	{
		capacity = cap; 
	}
	void setTechnologyType(string tech)
	{
		technologyType = tech; 
	}
	
	int getCapacity()
	{
		return capacity; 
	}
	string getTechnologyType()
	{
		return technologyType; 
	}

	void static checkValid(int & capacityMM, string& technologyTypeMM)
	{

		cout << "---------------------Main Memory---------------------\n";

		do {

			cout << "Enter the capacity of main memory: ";
			cin >> capacityMM;
		} while (!intCheck(capacityMM) || !negAndZero(capacityMM) || !powerOfTwo(capacityMM));


		do {
			cout << "Enter the technology type of main memory (Semiconductor/Silicon): ";
			cin >> technologyTypeMM;
		} while ( technologyTypeMM == "Semiconductor" ? 0 : technologyTypeMM == "Silicon" ? 0 : 1 );


	}



};


class Port {
	string type;
	int baud_rate;

public:
	
	Port(string Type = "", int rate = 0)
	{
		this->type = Type;
		baud_rate = rate;
	}

	void setBaudRate(int rate)
	{
		baud_rate = rate; 
	}
	void setType(string Type)  
	{
		type = Type; 
	}

	int getBaudRate()
	{
		return baud_rate; 
	}
	string getType()
	{
		return type; 
	}

	bool static portValidation(string prt)
	{
		return prt == "VGI" ? 0 : prt == "I/O" ? 0 : prt == "USB" ? 0 : prt == "HDMI" ? 0 : 1;
	}

	void static checkValid(string& type1PORT, string& type2PORT, string& type3PORT, string& type4PORT,
		int& baudRate1PORT, int& baudRate2PORT, int& baudRate3PORT, int& baudRate4PORT)
	{

		cout << "---------------------Ports---------------------\n";

		do {
			cout << "Enter the type of port 1 ( VGI / I/O / USB / HDMI ) : ";
			cin >> type1PORT;
		} while ( portValidation(type1PORT));

		do {
			cout << "Enter the type of port 2 ( VGI / I/O / USB / HDMI ) : ";
			cin >> type2PORT;
		} while ( portValidation(type2PORT));

		do {
			cout << "Enter the type of port 3 ( VGI / I/O / USB / HDMI ) : ";
			cin >> type3PORT;
		} while ( portValidation(type3PORT));

		do {
			cout << "Enter the type of port 4 ( VGI / I/O / USB / HDMI ) : ";
			cin >> type4PORT;
		} while ( portValidation(type4PORT));
		
		cout << "-----------------------------------------\n";

		do {
			cout << "Enter the baud rate of port 1: ";
			cin >> baudRate1PORT;
		} while (!intCheck(baudRate1PORT) || !negAndZero(baudRate1PORT) || !powerOfTwo(baudRate1PORT));
		
		do {
			cout << "Enter the baud rate of port 2: ";
			cin >> baudRate2PORT;
		} while (!intCheck(baudRate2PORT) || !negAndZero(baudRate2PORT) || !powerOfTwo(baudRate2PORT));
		
		do {
			cout << "Enter the baud rate of port 3: ";
			cin >> baudRate3PORT;
		} while (!intCheck(baudRate3PORT) || !negAndZero(baudRate3PORT) || !powerOfTwo(baudRate3PORT));
		
		do {
			cout << "Enter the baud rate of port 4: ";
			cin >> baudRate4PORT;
		} while (!intCheck(baudRate4PORT) || !negAndZero(baudRate4PORT) || !powerOfTwo(baudRate4PORT));
			
	
	}


};

class MotherBoard {
	Port ports[4];
	MainMemory mm;

public:
	MotherBoard():mm(),ports{Port(),Port(),Port(),Port()}{}

	MotherBoard(int cap, string tech,string type1PORT, string type2PORT, string type3PORT, string type4PORT,int baudRate1PORT,
		int baudRate2PORT, int baudRate3PORT, int baudRate4PORT)
	{
		mm.setCapacity(cap);
		mm.setTechnologyType(tech);

		ports[0].setType(type1PORT);
		ports[1].setType(type2PORT);
		ports[2].setType(type3PORT);
		ports[3].setType(type4PORT);

		ports[0].setBaudRate(baudRate1PORT);
		ports[1].setBaudRate(baudRate2PORT);
		ports[2].setBaudRate(baudRate3PORT);
		ports[3].setBaudRate(baudRate4PORT);
	}


	Port* getPorts()
	{
		return ports;
	}
	MainMemory getmm()
	{
		return mm;
	}

	void setPorts( string A = "", int rate1 = 0, string B = "",  int rate2 = 0, string C = "", int rate3 = 0, string D = "", int rate4 = 0)
	{
		ports[0].setBaudRate(rate1);
		ports[0].setType(A);

		ports[1].setBaudRate(rate2);
		ports[1].setType(B);

		ports[2].setBaudRate(rate3);
		ports[2].setType(C);

		ports[3].setBaudRate(rate4);
		ports[3].setType(D);

	}
	void setmm(int Capacity, string Type)
	{
		mm.setCapacity(Capacity);
		mm.setTechnologyType(Type);
	}

};





class Computer {

	PhysicalMemory* pm;
	MotherBoard* mb;

public:
	//Computer(PhysicalMemory Pm, MotherBoard Mb, CPU CPu) :pm(&Pm), mb(&Mb), cpu(&CPu) {}
	Computer(PhysicalMemory& Pm, MotherBoard& Mb) :pm(&Pm), mb(&Mb){}

	Computer( int capPhysicalMemory = 0 , int cap = 0, string tech = "", string type1 = "", int rate1 = 0, string type2 = "", int rate2 = 0,
		string type3 = "",	int rate3 = 0, string type4 = "", int rate4 = 0 )
	{
		pm->setCapacity(capPhysicalMemory);
		mb->setmm(cap, tech);
		mb->setPorts(type1, rate1, type2, rate2, type3, rate3, type4, rate4);

	}

	void setpm(PhysicalMemory& Pm) 
	{
		pm->setCapacity(Pm.getCapacity());
	}
	
	void setmb(MotherBoard& Mb)
	{
		mb->setmm(Mb.getmm().getCapacity() , Mb.getmm().getTechnologyType());
	}

	PhysicalMemory* getpm()
	{
		return pm;
	}

	MotherBoard* getmb()
	{
		return mb;
	}

	int static checkValid()
	{
		string temp;
		cout << "---------------------Computer Type---------------------\n";
		do {
			cout << "Enter the system you want to make: ( PC/Mac/Laptop ): ";
			cin >> temp;
		} while (temp == "PC" ? 0 : temp == "Mac" ? 0 : temp == "Laptop" ? 0 : 1);

		if (temp == "PC")		return 1;
		else if (temp == "Mac")	return 2;
		else					return 3;
	}



};

class computerAssemblyDesktop : public Computer {

	NetworkCard NC;
	PowerSupply PS;
	Case C;

public:

	computerAssemblyDesktop() :	
		NC(), PS(),C(), Computer(NULL, NULL) {}

	computerAssemblyDesktop( string typeNC, int speedNC, double priceNC,	 int wattagePS, string effPS, double pricePS,
		double casePrice, string formFactorC , string colorC ,					 PhysicalMemory& Pm, MotherBoard& Mb) :
		NC(typeNC,speedNC,priceNC), PS(wattagePS,effPS,pricePS),
		C(formFactorC,colorC,casePrice), Computer(Pm, Mb) {}

	void setNC(NetworkCard aNC)
	{
		NC = aNC;
	}
	NetworkCard getNC()
	{
		return NC;
	}

	void setPS(PowerSupply aPS)
	{
		PS = aPS;
	}
	PowerSupply getPS()
	{
		return PS;
	}

	void setPS(Case aC)
	{
		C = aC;
	}
	Case getC()
	{
		return C;
	}

};

class computerAssemblyLaptop : public Computer {

	NetworkCard NC;
	Battery B;

public:

	computerAssemblyLaptop( string typeNC, int speedNC, double priceNC, int capacityB,
		PhysicalMemory& Pm, MotherBoard& Mb) :		
		NC(typeNC,speedNC,priceNC),B(capacityB), Computer(Pm, Mb) {}

	void setNC(NetworkCard aNC)
	{
		NC = aNC;
	}
	NetworkCard getNC()
	{
		return NC;
	}


	void setB(Battery aB)
	{
		B = aB;
	}
	Battery getB()
	{
		return B;
	}

};



class Laptop : public computerAssemblyLaptop {
	Intel_AMD InAmd;
	GraphicsCard* gc;

public:
	Laptop(int adders , int subtractors, int registers, int sizeReg, int Clock, string aName,
		string typeNC, int speedNC, double priceNC, int capacityB,
		PhysicalMemory& Pm, MotherBoard& Mb, GraphicsCard& Gc)
		:InAmd(adders, subtractors, registers, sizeReg, Clock, aName)
		,gc(&Gc)
		,computerAssemblyLaptop(typeNC,speedNC,priceNC,capacityB,Pm,Mb){}


	Intel_AMD getInAmd()
	{
		return InAmd;
	}
	void setInAmd(Intel_AMD aInAmd)
	{
		InAmd = aInAmd;
	}

	void display()
	{
		cout
			<< "---ALU----\n\tAdders : " << InAmd.getalu().getNoOfAdders() << "\n\tSubtractor : " << InAmd.getalu().getNoOfSubtractors()
			<< "\n\tRegisters : " << InAmd.getalu().getNoOfRegisters() << "\n\tSize Of Registers : " << InAmd.getalu().getSizeOfRegisters()
			
			<< "\n-----Control Unit---------\n\tClock : " << InAmd.getcu().getClock()
			
			<< "\n--------CPU---------\n\tName : " << InAmd.getCpuName()
			
			<< "\n--------Network Card---------\n\tType : " << computerAssemblyLaptop::getNC().getType()
			<< "\n\tprice : " << computerAssemblyLaptop::getNC().getPrice()
			<< "\n\tspeed : " << computerAssemblyLaptop::getNC().getSpeed()
			
			<< "\n------Graphic Card-------\n\tBrand : " << gc->getBrand()
			<< "Memory Size : " << gc->getMemorySize()
			<< "Price : " << gc->getPrice()
			
			<< "\n--------Battery--------\n\tCapacity : " << computerAssemblyLaptop::getB().getCapacity()
			
			<< "\n--------Mother Board-----\n----------Main Memory-----------\n\tCapacity : " << computerAssemblyLaptop::getmb()->getmm().getCapacity()
			<< "\n\tType : " << computerAssemblyLaptop::getmb()->getmm().getTechnologyType()
			
			<< "\n------------Ports------------\n\t1-> Baud Rate : " << computerAssemblyLaptop::getmb()->getPorts()[0].getBaudRate() << "Type : " << computerAssemblyLaptop::getmb()->getPorts()[0].getType()
			<< "\n\t2-> Baud Rate : " << computerAssemblyLaptop::getmb()->getPorts()[1].getBaudRate() << "Type : " << computerAssemblyLaptop::getmb()->getPorts()[1].getType()
			<< "\n\t3-> Baud Rate : " << computerAssemblyLaptop::getmb()->getPorts()[2].getBaudRate() << "Type : " << computerAssemblyLaptop::getmb()->getPorts()[2].getType()
			<< "\n\t4-> Baud Rate : " << computerAssemblyLaptop::getmb()->getPorts()[3].getBaudRate() << "Type : " << computerAssemblyLaptop::getmb()->getPorts()[3].getType()
			
			<< "\n------Physical Memory---------\n\tCapacity : " << computerAssemblyLaptop::Computer::getpm()->getCapacity()
			
			;
	
	
	}
};

class PC : public computerAssemblyDesktop {
	Intel_AMD InAmd;
	GraphicsCard* gc;

public:

	PC(int adders, int subtractors, int registers, int sizeReg, int Clock, string aName,
		string typeNC, int speedNC, double priceNC, int wattagePS, string effPS, double pricePS, double casePrice, string formFactorC, string colorC,
		PhysicalMemory& Pm, MotherBoard& Mb, GraphicsCard& Gc)
		: InAmd(adders, subtractors, registers, sizeReg, Clock, aName)
		, gc(&Gc)
		, computerAssemblyDesktop(typeNC, speedNC, priceNC, wattagePS, effPS, pricePS, casePrice, formFactorC , colorC, Pm, Mb) {}

	Intel_AMD getInAmd()
	{
		return InAmd;
	}
	void setInAmd(Intel_AMD aInAmd)
	{
		InAmd = aInAmd;
	}

	void display()
	{
		cout
			<< "ALU\n\tAdders : " << InAmd.getalu().getNoOfAdders() << "\n\tSubtractor : " << InAmd.getalu().getNoOfSubtractors()
			<< "\n\tRegisters : " << InAmd.getalu().getNoOfRegisters() << "\n\tSize Of Registers : " << InAmd.getalu().getSizeOfRegisters()

			<< "\nControl Unit\n\tClock : " << InAmd.getcu().getClock()

			<< "\nCPU\n\tName : " << InAmd.getCpuName()

			<< "\nNetwork Card\n\tType : " << computerAssemblyDesktop::getNC().getType()
			<< "\n\tprice : " << computerAssemblyDesktop::getNC().getPrice()
			<< "\n\tspeed : " << computerAssemblyDesktop::getNC().getSpeed()

			<< "\nGraphic Card\n\tBrand : " << gc->getBrand()
			<< "Memory Size : " << gc->getMemorySize()
			<< "Price : " << gc->getPrice()

			<< "\nCase\n\tColor : " << computerAssemblyDesktop::getC().getColor()
			<< "\n\tform factor : " << computerAssemblyDesktop::getC().getFormFactor()

			<< "\nPower Supply\n\t" << computerAssemblyDesktop::getPS().getEfficiencyRating()
			<< "\n\tPrice : " << computerAssemblyDesktop::getPS().getPrice()
			<< "\n\tWattage : " << computerAssemblyDesktop::getPS().getWattage()

			<< "\nMother Board\nMain Memory\n\tCapacity : " << computerAssemblyDesktop::getmb()->getmm().getCapacity()
			<< "\n\tType : " << computerAssemblyDesktop::getmb()->getmm().getTechnologyType()

			<< "\nPorts\n\t1-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[0].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[0].getType()
			<< "\n\t2-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[1].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[1].getType()
			<< "\n\t3-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[2].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[2].getType()
			<< "\n\t4-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[3].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[3].getType()

			<< "\nPhysical Memory\n\tCapacity : " << computerAssemblyDesktop::Computer::getpm()->getCapacity()

			;


	}
};

class Mac : public computerAssemblyDesktop {
	AppleSilicon AS;

public:

	Mac(int adders, int subtractors, int registers, int sizeReg, int Clock, string aCPUName, string graphicBrand, int graphicMemory, double graphicPrice,
		string typeNC, int speedNC, double priceNC, int wattagePS, string effPS, double pricePS, int casePrice, string formFactorC, string colorC,
		PhysicalMemory& Pm, MotherBoard& Mb)
		:AS(adders, subtractors, registers, sizeReg, graphicBrand, Clock, aCPUName, graphicMemory, graphicPrice)
		, computerAssemblyDesktop(typeNC, speedNC, priceNC, wattagePS, effPS, pricePS, casePrice, formFactorC, colorC, Pm, Mb) {}

	AppleSilicon getAs()
	{
		return AS;
	}
	void setAs(AppleSilicon aAS)
	{
		AS = aAS;
	}

	void display()
	{
		cout
			<< "ALU\n\tAdders : " << AS.getalu().getNoOfAdders() << "\n\tSubtractor : " << AS.getalu().getNoOfSubtractors()
			<< "\n\tRegisters : " << AS.getalu().getNoOfRegisters() << "\n\tSize Of Registers : " << AS.getalu().getSizeOfRegisters()

			<< "\nControl Unit\n\tClock : " << AS.getcu().getClock()

			<< "\nCPU\n\tName : " << AS.getCpuName()

			<< "\nNetwork Card\n\tType : " << computerAssemblyDesktop::getNC().getType()
			<< "\n\tprice : " << computerAssemblyDesktop::getNC().getPrice()
			<< "\n\tspeed : " << computerAssemblyDesktop::getNC().getSpeed()
			
			<< "\nGraphics Card\n\tBrand : " << AS.getClass().getBrand()
			<< "\n\tMemory Size : " << AS.getClass().getMemorySize()
			<< "\n\tPrice : " << AS.getClass().getPrice()

			<< "\nCase\n\tColor : " << computerAssemblyDesktop::getC().getColor()
			<< "\n\tform factor : " << computerAssemblyDesktop::getC().getFormFactor()

			<< "\nPower Supply\n\t" << computerAssemblyDesktop::getPS().getEfficiencyRating()
			<< "\n\tPrice : " << computerAssemblyDesktop::getPS().getPrice()
			<< "\n\tWattage : " << computerAssemblyDesktop::getPS().getWattage()

			<< "\nMother Board\nMain Memory\n\tCapacity : " << computerAssemblyDesktop::getmb()->getmm().getCapacity()
			<< "\n\tType : " << computerAssemblyDesktop::getmb()->getmm().getTechnologyType()

			<< "\nPorts\n\t1-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[0].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[0].getType()
			<< "\n\t2-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[1].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[1].getType()
			<< "\n\t3-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[2].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[2].getType()
			<< "\n\t4-> Baud Rate : " << computerAssemblyDesktop::getmb()->getPorts()[3].getBaudRate() << "Type : " << computerAssemblyDesktop::getmb()->getPorts()[3].getType()

			<< "\nPhysical Memory\n\tCapacity : " << computerAssemblyDesktop::Computer::getpm()->getCapacity()

			;


	}

};

