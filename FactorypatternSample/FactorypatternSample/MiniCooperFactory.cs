using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FactorypatternSample.Autos;

namespace FactorypatternSample.Factory
{
    class MiniCooperFactory : IAutoFactories
    {
        public MiniCooperFactory() { }
        public Autos.IAuto CreateAutoMobile()
        {
            return new MiniCooper("mini");
        }
    }
}
