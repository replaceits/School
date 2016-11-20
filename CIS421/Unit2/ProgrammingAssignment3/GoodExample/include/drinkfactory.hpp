#ifndef _HPP_DRINKFACTORY_INCLUDED
#define _HPP_DRINKFACTORY_INCLUDED

#include <array>
#include <vector>

#include "drink.hpp"
#include "tea.hpp"
#include "coffee.hpp"
#include "soda.hpp"
#include "milkshake.hpp"
#include "juice.hpp"
#include "hot.hpp"
#include "cold.hpp"
#include "chocolate.hpp"
#include "strawberry.hpp"
#include "vanilla.hpp"

class DrinkFactory{
	private:
		DrinkFactory();
		~DrinkFactory();
	public:
		enum DrinkType{
			TEA,
			COFFEE,
			SODA,
			MILKSHAKE,
			JUICE
		};

		enum DrinkAttribute{
			HOT,
			COLD,
			CHOCOLATE,
			STRAWBERRY,
			VANILLA
		};

		template <typename... ArgsT>
			Drink* makeDrink( DrinkFactory::DrinkType, ArgsT... );

		static DrinkFactory& getInstance();
};

template <typename... ArgsT>
	Drink* DrinkFactory::makeDrink( DrinkFactory::DrinkType drinkT, ArgsT... drinkA ){
		std::array< DrinkFactory::DrinkAttribute, sizeof...(ArgsT) > 
			const attributes {drinkA...};
		Drink* drink = nullptr;
		switch( drinkT ){
			case DrinkFactory::DrinkType::TEA:
				drink = new Tea();
				break;
			case DrinkFactory::DrinkType::COFFEE:
				drink = new Coffee();
				break;
			case DrinkFactory::DrinkType::SODA:
				drink = new Soda();
				break;
			case DrinkFactory::DrinkType::MILKSHAKE:
				drink = new Milkshake();
				break;
			case DrinkFactory::DrinkType::JUICE:
				drink = new Juice();
				break;
			default:
				return nullptr;
				break;
		}
		for( const DrinkFactory::DrinkAttribute attribute : attributes ){
			switch( attribute ){
				case DrinkFactory::DrinkAttribute::HOT:
					drink = new Hot( drink );
					break;
				case DrinkFactory::DrinkAttribute::COLD:
					drink = new Cold( drink );
					break;
				case DrinkFactory::DrinkAttribute::CHOCOLATE:
					drink = new Chocolate( drink );
					break;
				case DrinkFactory::DrinkAttribute::STRAWBERRY:
					drink = new Strawberry( drink );
					break;
				case DrinkFactory::DrinkAttribute::VANILLA:
					drink = new Vanilla( drink);
					break;
				default:
					break;
			}
		}
		return drink;
	} 

#endif
