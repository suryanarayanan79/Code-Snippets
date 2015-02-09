using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FactorypatternSample.Autos;

namespace FactorypatternSample.Factory
{
    class BmwhybridFactory : IAutoFactories
    {

        public Autos.IAuto CreateAutoMobile()
        {
            return new BmwHybrid("Bmw Hybrid");
        }
    }
}
