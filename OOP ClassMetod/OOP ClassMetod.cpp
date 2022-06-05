#include <iostream>

// описать дом, его интерьер, экстерьер, и обитателей
// типы сущностей:
// дом,
// комната,
// холодильник,
// еда, напиток,
// кошка
// жилец (человек)

class House
{
   public:
   std::string adress;
   int age_of_house;
   long settle;
   std:: string color;
   double alcoholics;
   void Repair()
   {
	   std::cout << adress << "house is repairing\n";
   }
   void will_settle ()
   {
	   std::cout << "Settle at the address " << adress << settle << " human\n";
   }
   void agehouse()
   {
	   std::cout << "House age is "<< age_of_house<<" at the adress " << adress << "\n";
   }
   void color_of_house()
   {
	   std::cout << "Color of our house is "<< color << "\n";
   }
   void alcoholics_in_the_house()
   {
	   std::cout << "We have "<< alcoholics <<" alcoholics at the adress " << adress <<"\n\n";
   }
};

class Room
{
    public:
	int number_of_room;
	std::string console;
	double socks_in_the_house;
	short bed_in_the_house;
	long size_of_room;
	void Number() 
	{
		std::cout << "Number of my room is " << number_of_room << "\n";
	}
	void Console()
	{
		std::cout << "My love console is" << console << "\n";
	}
	void Socks()
	{
		std::cout << "In an unequal battle were lost " << socks_in_the_house << " socks\n";
	}
	void Bed()
	{
		std::cout << "I have " << bed_in_the_house << " bed\n";
	}
	void SizeRoom()
	{
		std::cout << "Size of my room is " << size_of_room << " square meters\n\n";
	}
};

class Fridge
{
public:
	int romcola;
	std::string best_food;
	double crisps;
	long carrot;
	short potato;
	void Romcola()
	{
		std::cout << "I have " << romcola << " litres of romcola\n";
	}
	void Best_food_ever()
	{
		std::cout << "Your best waifu is " << best_food << "\n";
	}
	void Crisps()
	{
		std::cout << "I have " << crisps << " crisps\n";
	}
	void Rabbit()
	{
		std::cout << "Rabbit have " << carrot << " carrot\n";
	}
	void Potato()
	{
		std::cout << "I have " << potato << " bulba\n\n";
	}
};

class Food
{
public:
	int cake;
	double hamburger;
	long meat;
	short bread;
	float cola;
	void Cake()
	{
		std::cout << "I have " << cake << " cake\n";
	}
	void Burger()
	{
		std::cout << "I have " << hamburger << " hamburger\n";
	}
	void Meat()
	{
		std::cout << "I have " << meat << " killograms of meat\n";
	}
	void Bread()
	{
		std::cout << "I have " << bread << " bread\n";
	}
	void Cola()
	{
		std::cout << "I have " << cola << " litres of cola\n\n";
	}
};

class Beverage
{
public:
	int beer;
	double vine;
	long vodka;
	short viskey;
	float juice;
	void Beer()
	{
		std::cout << "I have " << beer << " litres of beer\n";
	}
	void Vine()
	{
		std::cout << "I have " << vine << " litres of vine\n";
	}
	void Vodka()
	{
		std::cout << "I have " << vodka << " litres of vodka\n";
	}
	void Viskiy()
	{
		std::cout << "I have " << viskey << " litres of viskey\n";
	}
	void Juice()
	{
		std::cout << "I have " << juice << " litres of juice\n\n";
	}
};

class Cat
{
public:
	std::string name_of_cat; 
	std::string color_of_cat; 
	int age; 
	double weight; 
	float myau;
	void Name_of_cat()
	{
		std::cout << "The cat name is " << name_of_cat << "\n";
	}
	void Color()
	{
		std::cout << "Color of cat is " << color_of_cat << "\n";
	}
	void Age()
	{
		std::cout << "Age of cat is " << age << "\n";
	}
	void Weight()
	{
		std::cout << "Weight of cat is " << weight << "\n";
	}
	void Myau()
	{
		std::cout << "Cat do " << myau << " MYAUUUUU\n\n";
	}
};

class Person
{
public:
	std::string name_of_person;
	int age_of_person;
	double hands;
	float legs;
	short eyes;
	void Name_of_Person()
	{
		std::cout << "Name of person is " << name_of_person << "\n";
	}
	void Age_of_Person()
	{
		std::cout << "Age of person is " << age_of_person << "\n";
	}
	void Hands()
	{
		std::cout << "Person have " << hands << " hands\n";
	}
	void Legs()
	{
		std::cout << "Person have " << legs << " legs\n";
	}
	void Eyes()
	{
		std::cout << "Person have " << eyes << " eyes\n\n";
	}
};

int main()
{
	House house;
	house.adress = "Barsovka 228 ";
	house.age_of_house = 30;
	house.settle = 50;
	house.color = " Green";
	house.alcoholics = 3.5;
	house.Repair();
	house.will_settle();
	house.agehouse();
	house.color_of_house();
	house.alcoholics_in_the_house();
	Room room;
	room.number_of_room = 336;
	room.console = " Sony Playstation 4";
	room.socks_in_the_house = 5.5;
	room.bed_in_the_house = 1;
	room.size_of_room = 34;
	room.Number();
	room.Console();
	room.Socks();
	room.Bed();
	room.SizeRoom();
	Fridge fridge;
	fridge.romcola = 25;
	fridge.best_food = " Shawarma";
	fridge.crisps = 4;
	fridge.carrot = 6;
	fridge.potato = 10;
	fridge.Romcola();
	fridge.Best_food_ever();
	fridge.Crisps();
	fridge.Rabbit();
	fridge.Potato();
	Food food;
	food.cake = 1;
	food.hamburger = 3;
	food.meat = 4;
	food.bread = 2;
	food.cola = 5;
	food.Cake();
	food.Burger();
	food.Meat();
	food.Bread();
	food.Cola();
	Beverage beverage;
	beverage.beer = 10;
	beverage.vine = 34;
	beverage.vodka = 50;
	beverage.viskey = 35;
	beverage.juice = 15;
	beverage.Beer();
	beverage.Vine();
	beverage.Vodka();
	beverage.Viskiy();
	beverage.Juice();
	Cat cat;
	cat.name_of_cat = "Barsik";
	cat.color_of_cat = "Red";
	cat.age = 8;
	cat.weight = 5;
	cat.myau = 100;
	cat.Name_of_cat();
	cat.Color();
	cat.Age();
	cat.Weight();
	cat.Myau();
	Person person;
	person.name_of_person = "Napoleon";
	person.age_of_person = 25;
	person.hands = 2;
	person.legs = 2;
	person.eyes = 2;
	person.Name_of_Person();
	person.Age_of_Person();
	person.Hands();
	person.Legs();
	person.Eyes();
}