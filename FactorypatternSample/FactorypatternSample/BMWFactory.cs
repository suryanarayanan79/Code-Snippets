using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FactorypatternSample.Autos;

namespace FactorypatternSample.Factory
{
    class BMWFactory : IAutoFactories
    {
        public BMWFactory() { }
        public Autos.IAuto CreateAutoMobile()
        {
            return new BMW("bmw");
        }
    }
}
