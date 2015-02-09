using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FactorypatternSample.Autos
{
    class BmwHybrid : IAuto
    {
        public BmwHybrid(string name)
        {
            System.Console.WriteLine("BMW hybrid Initalised");
            Name = name;
        }

        public string Name
        {
            get;
            private set;
        }

        public void SetName(string name)
        {
            if (name == null) throw new ArgumentNullException("name");
            Name = name;
        }

        public void TurnOn()
        {
            System.Console.WriteLine("BMW Initalised");
        }

        public void TurnOff()
        {
            System.Console.WriteLine("BMW Initalised");
        }
    }
}
