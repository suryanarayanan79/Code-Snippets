using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderPattern
{
    class CheesePizzaBuilder : PizzaBuilder
    {

        public  override void BuildToppings()
        {
            aPizza.Toppings = "Cheese";
        }

        public  override void BuildName()
        {
            aPizza.Name = "Cheese Bust";
        }
    }

    class MexicanPizzaBuilder : PizzaBuilder
    {
        public  override void BuildToppings()
        {
            aPizza.Toppings = "Mexican Pepper";
        }

        public  override void BuildName()
        {
            aPizza.Name = "Mexican Bust";
        }
    }
}
