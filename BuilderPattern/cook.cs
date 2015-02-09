using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderPattern
{
    class cook
    {
        public PizzaBuilder _pizzaBuilder;
        public void SetPizzaBuilder(PizzaBuilder apizzaBuilder) {
            _pizzaBuilder = apizzaBuilder;
        }
        public void ConstructPizza() {
            _pizzaBuilder.CreatePizzaProduct();
            try
            {
                _pizzaBuilder.BuildName();
                _pizzaBuilder.BuildToppings();
            }
            catch(Exception ex)
            {
                System.Console.WriteLine("Expection Occured");
            }
        }

        public Pizza GetPizza()
        {
            return _pizzaBuilder.GetPizza();
        }
    }
}
