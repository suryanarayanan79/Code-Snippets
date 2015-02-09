using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderPattern
{
   abstract class  PizzaBuilder
    {
       protected Pizza aPizza;
       public Pizza GetPizza()
       {
           if (aPizza != null) return aPizza;
           else return aPizza;
       }
       public void CreatePizzaProduct()
       {
           aPizza = new Pizza();
       }
      public abstract void BuildToppings();
      public abstract void BuildName();
    }
}
