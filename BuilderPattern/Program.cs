using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            PizzaBuilder aCheeseBuilder = new CheesePizzaBuilder();
            cook aCook = new cook();
            aCook.SetPizzaBuilder(aCheeseBuilder);
            aCook.ConstructPizza();
            Pizza apizza = aCook.GetPizza();
            System.Console.WriteLine(apizza.Toppings + apizza.Name);
        }
    }
}
